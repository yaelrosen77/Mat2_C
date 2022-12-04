#include "my_mat.h"


void Afunc(int mat[N][N]){
    int j,i,k;
    for(k=0; i<N; k++){
        for(i=0;i<N;i++){
            for(j=0;j<N; j++){
                if(mat[i][k]!= infinity && mat[k][j]!=infinity){
                mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
    }
}

void Bfunc(int mat[N][N], int a, int b){
    if (mat[a][b]==0 || mat[a][b]== infinity){
        printf("False\n");
    }
    else {printf("True\n");}
}

void Cfunc(int mat[N][N],int a,int b){
    if(mat[a][b]==0 || mat[a][b]==infinity){
        printf("-1\n");
    }
    else {
        printf("0\n");
    }
}





