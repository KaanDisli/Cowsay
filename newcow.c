#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
void update() { printf("\033[H\033[J") ;}
void gotoxy(int x,int y) { printf("\033[%d;%dH",x,y);}
void test(){
printf( " ^__^\n\\(00)\\");

}
//On ajoute des espaces au debut a chaque tour de la boucle
void affiche_vache_animation(){
	char str[30];
	int i;
	for(i=0;i<20;i++){
		str[i] = ' ';
		printf("%s",str);
		
		printf("^__^\n");
		printf("%s",str);
		
		printf("(00)\\_______\n%s",str);
		
		
		printf("(__)\\       )\\/\\\n");
		printf("%s",str);
		
		if(i%2 == 0){
		printf(" U  ||----w |\n");
		printf("%s",str);
		}
		else{
		printf("    ||----w |\n");
		printf("%s",str);
		}
		
		
		
		printf("    ||     ||\n");
		sleep(1);
		update();
		printf("\n");
		
		
		
		
		
	}
	
	
}

//On affiche le vache selon les parametres qui sont entre
void affiche_vache(char c[], bool yeux, bool langue, int taille){
	char str[50];
  
  int i;
	//Tester les paremetres 
	if (taille == 0){
	if (yeux && langue){
	printf("	 		    ^__^\n\
			    (%c%c)\\_______\n\
			    (__)\\	)\\/\\\n\
			     U   ||----w |\n\
				 ||     ||\n", c[0],c[1]);
	}
	if(yeux && !langue){ 
	printf("	 		    ^__^\n\
			    (%c%c)\\_______\n\
			    (__)\\	)\\/\\\n\
				||----w |\n\
				||     ||\n", c[0],c[1]);
	}
	if (!yeux && langue){
	
	printf("^__^\n");
	printf("(00)\\_______\n");
	printf("(__)\\	     )\\/\\\n");
	printf(" U   ||----w |\n");
	printf("     ||     ||\n");
	
	}
}else{
//Creation de queue
for(i=0;i<taille;i++){
	str[i] = '_';
}
//Tester les parametres
 if (yeux && langue){
	printf("	 		    ^__^\n\
			    (%c%c)\\_______\n\
			    (__)\\	)\\/\\%s\n\
			     U   ||----w |\n\
				 ||     ||\n", c[0],c[1],str);
	
	}
	if(yeux && !langue){ 
	printf("	 		    ^__^\n\
			    (%c%c)\\_______\n\
			    (__)\\	)\\/\\%s\n\
				||----w |\n\
				||     ||\n", c[0],c[1],str);
	
	}
	if (!yeux && langue){
	printf("	 		    ^__^\n\
			    (00)\\_______\n\
			    (__)\\	)\\/\\%s\n\
			     U   ||----w |\n\
				 ||     ||\n",str);
	
	}
}

}





int main(int argc, char* arg1[]){
//Declaration des variables

int i;
bool e =false;
bool T= false;
char yeux[5];
int taille = 0;


//Verification des arguments 

for(i=0;i<argc;i++){
	if (strcmp(arg1[i],"-e")==0 ){	
			e = true;
			strcpy(yeux,arg1[i+1]);
		}
	if (strcmp(arg1[i],"-T")==0 ){	
			T = true;
	
		}
	if (strcmp(arg1[i],"--tail")==0 ){
		
			taille = atoi(arg1[i+1]);
	
		}
 }
//Affichage de vache
//Entrez pas de parametres pour voir le vache qui bouge
//Entrez -T pour voir la langue
//Entrez -e {character1character2} pour changer les yeux
//Entrez -tail {nombre} pour elonger la queue
int x;
if (argc > 1){

	   affiche_vache(yeux,e,T,taille);
}
else{
affiche_vache_animation();


}








}
