/*#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,k;
    k=1;
    for(i=1;i<5;i++)
    {
        for(j=1;j<i;j++)
        {
         printf("%d",k++);   
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j, k;
    char ch = '*';
    k = 97;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%5c", k++);
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k <= 122)
                printf("%5c", k++);
            else
                printf("%5c", ch);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,product;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            
            printf("%5d",i*j);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int r,c,i=0,j=1,sum=1;

    for(r=1;r<=6;r++){
        for(c=1;c<=r;c++){
            if(r==1 && c==1){
                printf("\t0");
                continue;
            }
            printf("\t%d",sum);
            sum=i+j;
            i=j;
            j=sum;
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of lines\n");
    scanf("\t%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%c",(char)(i+64));
        }
        printf("\n");
    }
}

/* #include <stdio.h>  
  
int main() {  
    
  int n;  
  printf("Enter the number of columns");  
  scanf("%d",&n);  
 for(int i=0;i<n;i++)  
 {  
   for(int j=0;j<i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=1;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<n-i;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
  return 0;  
}*/

/*#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=5-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j,k;
    int n=5;
    int z=1;

    for(i=1;i<=n;i++)
    {
        //print space
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //print star
        for(k=1;k<=z;k++)
        {
                printf("* ");
        }
        printf("\n");
        z=z+1;
    }
    return 0;
}*/



 