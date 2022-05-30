#include"sudoku.h"
#include"genere.h"

int main(){
    int r ;
    saisie();init();
    printf("Voici la grille initiale :  \n");
    generat();transToFile();transToGrid();
    printf("\n\n");
	if (solve(grid)) {
	} else {
		printf("no solution");
	}
	conserve();generatee();affichage();
	printf("\n\n");
	printf("Si vous voulez la solution taper 1 , sinon taper 0 : \n");
	scanf("%d",&r);
	if (r==1){
        transToGridResultat();
        affichageFinale();
	}
	else{
        return 0;
	}
    return 0;
}
