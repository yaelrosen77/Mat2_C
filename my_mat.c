#include "my_mat.h"


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

void Bfunc(int mat[N][N], int a, int b){
    if (mat[a][b]==0 || mat[a][b]== (int)INFINITY){
        printf("False\n");
    }
    else {printf("True\n");}
}

void Cfunc(int mat[N][N],int a,int b){
    if(mat[a][b]==0 || mat[a][b]==(int)INFINITY){
        printf("-1\n");
    }
    else {
        printf("%d\n",mat[a][b]);
    }
}





