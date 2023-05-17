#!/bin/bash



#On a cree un fonction 'fun' pour lire le saisie d'utilisateur. On trouve la signe d'operation il veut effectuer 
fun()
{
  if [[ $1 == *+* ]]; then
  echo + 
  fi
  if [[ $1 == *-* ]]; then
  echo - 
  fi
  if [[ $1 == *"*"* ]]; then
  echo "*" 
  fi
  if [[ $1 == */* ]]; then
  echo / 
  fi
  

}

#On garde le resultat dans un variable
a=$(fun $1)
#On effectue l'operation entre les 2 nombres qui sont separe par l'operateur selon le type d'operation


if [[ $a == "*" ]]
then
	b=$(echo $1 |cut -d "*" -f 1)
	c=$(echo $1 |cut -d "*" -f 2)
	res=$(($b*$c))
	cowsay -e $res $1
fi


if [[ $a == "+" ]]
then
	b=$(echo $1 | cut -d "+" -f 1)
	c=$(echo $1 |cut -d "+" -f 2)
	res=$(($b+$c))
	cowsay -e $res $1
	

fi
if [[ $a == "-" ]]
then
	b=$(echo $1 |cut -d "-" -f 1)
	c=$(echo $1 |cut -d "-" -f 2)
	res=$(($b-$c))
	cowsay -e $res $1


fi
if [[ $a == "/" ]]
then
	b=$(echo $1 |cut -d "/" -f 1)
	c=$(echo $1 |cut -d "/" -f 2)
	res=$(($b/$c))
	cowsay -e $res $1

fi
