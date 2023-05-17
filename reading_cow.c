#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int main(){

 //On ouvre le fichier 'cow.txt'
 FILE *fp = fopen("cow.txt", "r");
 //Decleration de variable ou on va stocker le contenu
    char con[50];
    int i=0;
    if (!fp)// control pour error
    return 1;
    fgets(con,50, fp);
    while(con[i]!= '\0'){
	i++;
	}
 //Affichage de vache
    while(i!=-1){
	printf("-----");
    	printf("< %s > \n",con);
	printf("-----");
	con[i] = ' ';
	i--;

	            printf("^__^\n\
			    (00)\\_______\n\
			    (__)\\	)\\/\\\n\
			     U   ||----w |\n\
				 ||     ||\n");
	
	}
   
    fclose(fp); // fermer le document

         

   
}

