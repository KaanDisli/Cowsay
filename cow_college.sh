#!/bin/bash

if [ $# != 1 ]
then 
	echo "Incorrect number of arguments"
	echo "Usage: $0 <NUMBER>"
	exit
fi

x=1
b=1
#On initialise les deux variables a 1 (comme le serie fibonacci) puis on sauvegard la somme dans une variable temporaire pour la prochaine tour dans le boucle
while [ $1 -gt $x ] 
do
	cowsay $x
	
	tmp=$((x+b))
	x=$b
	b=$tmp
	sleep 1
	clear
	
	
	
done;
