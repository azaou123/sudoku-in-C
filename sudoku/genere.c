#include"sudoku.h"
#include"genere.h"
//Fonction de saisie
void saisie(void){
    printf("Bonjeur :\nEntrer le niveau de difficulte :\n \t\t1:Facile, \t\t2:Moyen, \t\t3:Defficile \n");
    scanf("%d",&level);
}
//Fonction de initialisation
void init(void){
    for (i=0 ; i<16 ; i++){
        for (j=0 ;j<16 ; j++){
            grille[i][j]=0 ;
        }
    }
}
void affichage(void){
    for (int i =0; i < dim; i++) {
	    if (i%3 == 0)printf(" \t \t \t +----------+----------+---------+\n");
        printf("\t\t\t");
		for (int j = 0; j < dim; j++) {
		    if (j%3 == 0)printf(" |");
			printf("%2d ", grid[i][j]);
		}
		printf("|\n");
	}
	printf(" \t \t \t +----------+----------+---------+\n");
}
void affichageFinale(void){
    for (int i =0; i < dim; i++) {
	    if (i%3 == 0)printf(" \t \t \t +----------+----------+---------+\n");
        printf("\t\t\t");
		for (int j = 0; j < dim; j++) {
		    if (j%3 == 0)printf(" |");
			printf("%2d ", grille[i][j]);
		}
		printf("|\n");
	}
	printf(" \t \t \t +----------+----------+---------+\n");
}
//generation
int generat (void){
    srand(time(0)); int iter=0 ;
    c=0; racine = sqrt(dim) ;
    int one ;
    while(c<dim*2){
        i=rand()%dim;  j=rand()%dim;  a=rand()%(dim);
        if (grille[i][j]==0 && existeLigne(i,a+1)==0 && existeColonne(j,a+1)==0 && existeRegion(i,j,a+1)==0){
            grille[i][j]=a+1; c++;
        }
    }
    sortir : return 0;
}
