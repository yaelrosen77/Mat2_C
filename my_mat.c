#include "my_mat.h"

/*changing the adjacency matrix to an updated matrix according to Floyd–Warshall_algorithm*/
void Afunc(int mat[N][N]){ 
    int i,j,k;
    for(k=0; k<N; k++){
        for(i=0;i<N;i++){
            for(j=0;j<N; j++){
                if(i!=j && mat[i][k]!=(int)INFINITY&&mat[k][j]!=(int)INFINITY){
                mat[i][j]=(int)fmin((double)mat[i][j],(double)mat[i][k]+mat[k][j]);
                }
            }
        }
    }
}
/*this func checks if there is a route between vertex a to b*/
void Bfunc(int mat[N][N], int a, int b){
    if (mat[a][b]==0 || mat[a][b]== (int)INFINITY){
        printf("False\n");
    }
    else {printf("True\n");}
}

/*this func returns the smallest route between vertex a and b*/
void Cfunc(int mat[N][N],int a,int b){
    if(mat[a][b]==0 || mat[a][b]==(int)INFINITY){
        printf("-1\n");
    }
    else {
        printf("%d\n",mat[a][b]);
    }
}





