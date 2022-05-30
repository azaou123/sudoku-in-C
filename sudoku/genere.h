#ifndef GENERE_H_INCLUDED
#define GENERE_H_INCLUDED
#define N 9
#define UNASSIGNED 0
int grid[N][N] ;
extern int is_exist_row(int grid[N][N] , int , int ) ;
extern int is_exist_col(int[N][N] , int , int ) ;
extern int is_exist_box(int[N][N] , int , int , int) ;
int is_safe_num(int grid[N][N], int , int , int ) ;
extern int find_unassigned(int[N][N] , int *, int *) ;
extern int solve(int[N][N] );
#endif // GENERE_H_INCLUDED
