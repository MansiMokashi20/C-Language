//matrix addition
#include<stdio.h>
#define max 20
int main(){
    int mat1[max][max];
    int mat2[max][max];
    int mat3[max][max];
    int i,j,flag=0;
    int r1,c1;
    int r2,c2;
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
    printf("\nhow many rows and column do you want in matrix: ");
    scanf("%d%d",&r2,&c2);
    printf("\nenter the element you want in matrix: ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%5d",&mat2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%5d",mat2[i][j]);
        }
        printf("\n");
    }
    if((r1==r2)&&(c1==c2)){
        flag=1;
    }
    else{
        if(r1!=r2){
            printf("addition is not possible bcoz no of rows are not same...");
        }
        else{
            printf("addition is not possible bcoz no of coloumn are not same...");
        }
    }
    if(flag==1){
        for(i=0;i<r1;i++){
          for(j=0;j<c1;j++){
         
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\n*********MATRIXADDITION*************\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%5d",mat3[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}