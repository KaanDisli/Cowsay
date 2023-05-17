#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void affiche_vache(int etatSante){

  
	//Tester le paremetre etatSante pour affichier le bon etat de vache
	if (etatSante == 0){

	printf("--------\n");
    	printf("<décédée> \n");
	printf("--------\n");
	

	printf("            		    ^__^\n\
			    (XX)\\_______\n\
			    (__)\\	)\\/\\\n\
			         ||----w |\n\
				 ||     ||\n");
	}
	if (etatSante == 1){

	printf("--------------------\n");
    	printf("<ne se sent pas bien> \n");
	printf("--------------------\n");
	

	printf("            		    ^__^\n\
			    (--)\\_______\n\
			    (__)\\	)\\/\\\n\
			         ||----w |\n\
				 ||     ||\n");
	}
	if (etatSante == 2){

	printf("-----------------\n");
    	printf("<en pleine forme”> \n");
	printf("-----------------\n");
	

	printf("            		    ^__^\n\
			    (00)\\_______\n\
			    (__)\\	)\\/\\\n\
			     U   ||----w |\n\
				 ||     ||\n");
	}

}

//On calcule le stock
int stock_update(int lunchfood, int stock, int cropRand){
	return (stock-lunchfood)+cropRand;


}
//On calcule le niveau de fitness
int fitness_update(int lunchfood, int fitness, int digestionRand){
	return (fitness+lunchfood)+digestionRand;


}


int main(int argc, char* arg1[]){

//Declaration des variables globales
int STOCK = 5;
int FITNESS = 5;
int lunchfood;
int duree_de_vie= 0;
int EtatSante = 2;
affiche_vache(EtatSante);
	while(EtatSante != 0){
	 //Affichage de vache
	 
	
	 

	/* Intialise le generateur de nombres aleatoires */

	time_t t ;
	srand((unsigned)time(&t));

	/* Genere un nombre aleatoire entre 0 et 3 */
	int digestionRand;
	digestionRand = -1*(rand () % 3);

	/* Genere un nombre aleatoire entre -3 et 3 */
	int cropRand; 
	int sign = (rand () % 2);
	cropRand = rand () % 3;
	if (sign ==0){cropRand = (cropRand) * -1;}

	//Assurer que les valeurs sont entre 0 et 10
	if(STOCK <1){STOCK =1;}
	if(STOCK >9){STOCK =9;}
	if(FITNESS <1){break;}
	if(FITNESS >9){break;}


	
	 //Recuperer les saisies d'utilisateur
	 printf("L'etat du stock: %d\n",STOCK);
	
	 printf("Entrez une quantité de nourriture a allouer a la vache:\n");
	 scanf("%d",&lunchfood);	
	 while (lunchfood > STOCK){
		printf("Saisie incorrect: Entrez une quantité plus petit que le stock\n");
		scanf("%d",&lunchfood);
		}
	STOCK = stock_update(lunchfood, STOCK, cropRand);
	FITNESS = fitness_update(lunchfood,FITNESS, digestionRand);
	//Convertir le valeur de FITNESS a EtatSante
	if(FITNESS <=3){ EtatSante = 0;}
	if(FITNESS <=9 && FITNESS >= 7){ EtatSante = 1;}
	if(FITNESS <=6 && FITNESS >= 4){ EtatSante = 2;}
	//affichage de vache
	affiche_vache(EtatSante);
	duree_de_vie++;
	}
	printf("Le vache est mort. Duree de vie: %d\n", duree_de_vie);
	printf("            		    ^__^\n\
			    (XX)\\_______\n\
			    (__)\\	)\\/\\\n\
			         ||----w |\n\
				 ||     ||\n");
	}

