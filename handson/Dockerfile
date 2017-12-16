FROM ubuntu:16.04
RUN dpkg --add-architecture i386
RUN apt-get update
RUN apt-get install -y gcc-multilib
RUN apt-get install -y python python-pip
RUN apt-get install -y strace ltrace gdb

RUN apt-get install -y netcat
RUN apt-get install -y wget
RUN wget https://github.com/radare/radare2/releases/download/2.1.0/radare2-2.1.0.tar.gz && gunzip radare2-2.1.0.tar.gz && tar xvf radare2-2.1.0.tar && cd radare2-2.1.0 && ./configure && sys/install.sh

RUN pip install --upgrade pip 
RUN pip install pwntools

RUN mkdir -p /home/guest
RUN useradd guest
RUN chown -R guest /home/guest
RUN wget https://github.com/downloads/0vercl0k/rp/rp-lin-x64 -o /usr/bin/rp++
COPY material/ /home/guest/
