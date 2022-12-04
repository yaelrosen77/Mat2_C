#include <stdio.h>
#include "my_mat.h" 
#define N 10
#define infinity 4294967295
    
int main(){
    int new_matrix[N][N]= {{0}};
    char ch;
    
    int i,j;
    scanf("%c",&ch);
    while(ch!='D'){
        if(ch == 'A'){
            for (i=0;i<N; i++){
                for(j=0;j<N; j++){
                    scanf("%d", &new_matrix[i][j]);
                    if (i!=j && new_matrix[i][j]==0)
                    {
                        new_matrix[i][j] = infinity;
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






