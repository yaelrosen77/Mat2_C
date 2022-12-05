#include <stdio.h>
#include "my_mat.h" 
#define N 10

    
int main(){
    int new_matrix[N][N]= {{0}};
    char ch ='0';
    
    int i,j;
    while(ch!='D'){
        scanf("%c",&ch);
        if(ch == 'A'){
            for (i=0;i<N; i++){
                for(j=0;j<N; j++){
                    scanf(" %d", &new_matrix[i][j]);
                    if (i!=j && new_matrix[i][j]==0)
                    {
                        new_matrix[i][j] = (int)INFINITY;
                    }}
                    }
                }
            }
        Afunc(new_matrix);

        }
    
        else if (ch=='B')
        {   
            scanf("%d",&i);
            scanf("%d",&j);
            Bfunc(new_matrix,i,j);
        }
        
        else if (ch=='C')
        {
            scanf("%d",&i);
            scanf("%d",&j);
            Cfunc(new_matrix,i,j);
        }

    }
    
return 0;


    }






