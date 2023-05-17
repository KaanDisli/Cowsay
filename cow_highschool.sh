#!/bin/bash


#On test les parametres entre par l'utilisateur
if [ $# != 1 ]
then 
	echo "Incorrect number of arguments"
	echo "Usage: $0 <NUMBER>"
	exit
fi

#On incremente x et a chaque etape calcule le carre
for ((x=1;x<$1;x++))
do
	cowsay $(($x*$x))
	sleep 1
	clear
done;

cowsay -T U $(($1*$1))