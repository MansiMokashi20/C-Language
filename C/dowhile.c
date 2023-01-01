/*#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    do
    {
       r=n%10;
       printf("%d",r);
       n=n/10;
       sum=sum+r;
    }while(n!=0);
    printf("thank you");
    return 0;
    
}*/

#include<stdio.h>
int main(){
    int n,r,rev=0,x;
    printf("enter any number: ");
    scanf("%d",&n);
    x=n;
    do
    {
       r=n%10;
       rev=(rev*10)+r;
       
       n=n/10;
       
    }while(n!=0);
    printf("\nreverse is : %d",rev);

    if(x==rev){
        printf("\ngiven number is pallindrome");   
    }
    else{
        printf("\nnot pallindrome");
    }
    printf("\nthank you");
    return 0;
}
    
        