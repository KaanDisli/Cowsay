#!/bin/bash

#On a cree un fonction pour tester si un nombre est prime ou pas. S'il est divisible par un nombre inferieur a lui, il n'est pas prime
isPrime(){

#Condition de base: 1 et 0 ne sont pas primes
if [ $1 == 1 ] || [ $1 == 0 ]
then
        echo "not prime"
        exit
fi
#On fait un boucle et teste si le modulo du parametre est egale a 0
    for ((i = 2; i < $1; i++)) 
    do
 	h=$(($1 % i)) 
        if [ $h -eq 0 ]
        then
            echo "not prime"
            exit
         fi
    done;
 
    echo "prime"
    exit

}


if [ $# != 1 ]
then 
	echo "Incorrect number of arguments"
	echo "Usage: #0 <NUMBER>"
	exit
fi
#On verifie le resultat de fonction isPrime, s'il retourne 'prime' on effectue le cowsay
for ((n = 2; n < $1; n++)) 
	do
	a=$(isPrime $n)
	
	if [[ $a == "prime" ]]
	then 
	cowsay $n
    sleep 1
    cleartmp=$n
	fi	
done;
 
