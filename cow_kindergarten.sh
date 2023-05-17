#!/bin/bash
#On increment x dans le chaque tour de la boucle et effectue un cowsay 
for ((x=1;x<10;x++))
do
	cowsay $x 
	sleep 1
	clear
done;

cowsay -T U "10"