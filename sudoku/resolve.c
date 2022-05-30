#include"sudoku.h"
#include"genere.h"



//Fonctions de Verification
int existeLigne (int ligne , int element){
    int existe = 0 , l ;
    for (l=0;l<dim;l++){
        if (grille[ligne][l]==element)existe=1 ;
    }
    return (existe);
}
int existeColonne (int colonne , int element){
    int existe = 0 , x ;
    for (x=0; x<dim; x++){
        if (grille[x][colonne]==element) existe=1;
    }
    return(existe) ;
}
int existeRegion (int ligne , int colonne , int element){
    while ((ligne)%racine != 0)ligne--;
    while ((colonne)%racine != 0)colonne--;
    //printf("%d , %d\n",ligne , colonne);
    int existe = 0  ;
    for (d=ligne;d<ligne+racine;d++){
        for (b=colonne;b<colonne+racine;b++){
            if (grille[d][b]==element) {existe=1; }
        }
    }
    return (existe) ;
}
void transToFile (void ){
    FILE *ptr= fopen("donne1.txt","w");
    for (i=0 ; i<dim ; i++){
        for (j=0 ;j<dim ; j++){
            fprintf(ptr, "%d\n",grille[i][j]);
        }
    }
    fclose(ptr);
}
void transToGrid(void ){
    FILE *ptr= fopen("donne1.txt","r");
    for (i=0 ; i<dim ; i++){
        for (j=0 ;j<dim ; j++){
            fscanf(ptr,"%d\n",&grid[i][j]);
        }
    }
    fclose(ptr);
}
void transToGridResultat(void ){
    FILE *ptr= fopen("resultat.txt","r");
    for (i=0 ; i<dim ; i++){
        for (j=0 ;j<dim ; j++){
            fscanf(ptr,"%d\n",&grille[i][j]);
        }
    }
    fclose(ptr);
}
void conserve(void){
    FILE *ptr= fopen("resultat.txt","w");
    for (i=0 ; i<dim ; i++){
        for (j=0 ;j<dim ; j++){
            fprintf(ptr,"%d\n",grid[i][j]);
        }
    }
    fclose(ptr);
}
int generatee (void){
    srand(time(0));
    int e=0; racine = sqrt(dim);
    int raff ;
        if(level==1){raff=65;}
        else if(level==2){raff=37;}
        else {raff=20;}
        while(e<81-raff){
            i=rand()%dim;  j=rand()%dim;
            if (grid[i][j]!=0){
                grid[i][j]=0; e++;
            }
        }
    return 0;
}










/**********************************************************************************/
int is_exist_row(int grid[N][N], int row, int num){
	for (int col = 0; col < 9; col++) {
		if (grid[row][col] == num) {
			return 1;
		}
	}
	return 0;
}
int is_exist_col(int grid[N][N], int col, int num) {
	for (int row = 0; row < 9; row++) {
		if (grid[row][col] == num) {
			return 1;
		}
	}
	return 0;
}
int is_exist_box(int grid[N][N], int startRow, int startCol, int num) {
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			if (grid[row + startRow][col + startCol] == num) {
				return 1;
			}
		}
	}
	return 0;
}
int is_safe_num(int grid[N][N], int row, int col, int num) {
	return !is_exist_row(grid, row, num)
			&& !is_exist_col(grid, col, num)
			&& !is_exist_box(grid, row - (row % 3), col - (col %3), num);
}
int find_unassigned(int grid[N][N], int *row, int *col) {
	for (*row = 0; *row < N; (*row)++) {
		for (*col = 0; *col < N; (*col)++) {
			if (grid[*row][*col] == 0) {
				return 1;
			}
		}
	}
	return 0;
}
int solve(int grid[N][N]){
	int row = 0;
	int col = 0;
	if (!find_unassigned(grid, &row, &col)){
		return 1;
	}
	for (int num = 1; num <= N; num++ ) {
		if (is_safe_num(grid, row, col, num)) {
			grid[row][col] = num;
			if (solve(grid)) {
				return 1;
			}
			grid[row][col] = UNASSIGNED;
		}
	}
	return 0;
}

/***********************************************************************************/
















