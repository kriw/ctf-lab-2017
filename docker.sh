tagname="kriw/ctf-lab-2017"
dockerfile="Dockerfile"
xinetd="xinetd.conf"

rm $xinetd
rm $dockerfile
echo FROM ubuntu:16.04 >> $dockerfile
echo EXPOSE 1000-1020 >> $dockerfile

echo RUN apt-get update >> $dockerfile
echo RUN apt-get install -y xinetd >> $dockerfile

for _name in $(find ./ -name a.out | cut -d'/' -f2-3)
do
    name=$(echo $_name | sed 's/\//_/')
    echo RUN mkdir -p /home/$name >> $dockerfile
    echo RUN useradd $name >> $dockerfile 
    echo COPY $_name/a.out /home/$name/ >> $dockerfile
    echo COPY $_name/flag.txt /home/$name/ >> $dockerfile
    echo RUN chown -R $name /home/$name >> $dockerfile
    echo RUN chmod -R 500 /home/$name >> $dockerfile
done
bash ./xinetd.conf.sh > $xinetd
echo COPY $xinetd /etc/xinetd.conf >> $dockerfile
echo 'CMD ["/usr/sbin/xinetd", "-dontfork"]' >> $dockerfile

docker build -t $tagname .
rm $dockerfile
rm $xinetd
