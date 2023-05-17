#!/bin/bash

if [ $# != 1 ]
then 
	echo "Incorrect number of arguments"
	echo "Usage: $0 <NUMBER>"
	exit
fi


for ((x=1;x<$1;x++))
do
	cowsay $x 
	sleep 1
	clear
done;

cowsay -T U "$1"