//matrix transpose
#include<stdio.h>
#define max 20
int main(){
    int mat1[max][max];                 
                                     
    int trans[max][max];              
    int i,j;
    int r1,c1;
    printf("\nhow many rows and column do you want in matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nenter the element you want in matrix: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%5d",&mat1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%5d",mat1[i][j]);
        }
        printf("\n");
    }
     printf("*********MATRIX TRANSPOSE*********");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            trans[j][i]=mat1[i][j];
        }
}
 printf("\nTranspose of matrix:\n");
 for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",trans[i][j]);
            
        }   
        printf("\n"); 
 }
    return 0;
    }
