#!/bin/bash
echo defaults 
echo {
echo }

i=1000
for name in $(find ./ -name a.out | cut -d'/' -f2-3 | sed 's/\//_/')
do
    echo service $name
    echo {
    echo     disable  = no
    echo     protocol = tcp
    echo     user     = $name
    echo     bind     = 0.0.0.0
    echo     server   = /home/$name/a.out
    echo     type     = UNLISTED
    echo     port     = $i
    echo }
    i=$(($i+1))
done

echo includedir /etc/xinetd.d
