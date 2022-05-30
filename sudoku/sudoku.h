#ifndef SUDOKU_H_INCLUDED
#define SUDOKU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define dim 9
//Variables Globales
int i, j, k ;
int cmp, tmp, compteur, c;
int  racine , level;
int n, m, l, p, a, b , d;
int grille[16][16] ;
//Generation de Sudoku
extern void saisie(void) ;
extern void init(void) ;
extern void affichage(void) ;
extern void affichageFinale(void) ;
//Resolution de sudoku
extern int existeLigne (int , int );
extern int existeColonne (int , int );
extern int existeRegion (int , int , int );
extern int generat(void);
extern void transToFile (void );
void conserve(void) ;
void transToGrid(void );
void transToGridResultat(void );





#endif // SUDOKU_H_INCLUDED
