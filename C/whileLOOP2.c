//factorial 
/*#include<stdio.h>
int main(){
    int n,ans=1,i;
    printf("enter any number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        ans=ans*i;
        i++;
    }
    printf("facctor of %d is %d",n,ans);
    return 0;

}*/

//base,power program
/*#include<stdio.h>
int main()
{
    int base,exponential,ans=1,i;

    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the exponential: ");
    scanf("%d",&exponential);
    i=1;

    while(i<=exponential)
    {
        ans=ans*base;
        i++;

    }
    printf("%d ^ %d = %d",base,exponential,ans);
    return 0;
}*/

//check prime or not
/*#include<stdio.h>
int main()
{
    int n,i,m=1;
    printf("type any number: ");
    scanf("%d",&n);
    i=2;
    while(i<=n/2)
    {
        if(n % i==0){
        m=0;
        break;
        }
        i++;
    }
    if(m==1){
        printf("  %d is prime",n);
    }
    else{
        printf(" %d is not prime",n);
    }
    
    return 0;

}*/

//reverse of no.
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;  //r=123%10=3 r=12%10=2 r=1%10=1
        printf("%d",r);  //321
        n=n/10;  //n=123/10= n=12 n=12/10=1 n=1/1/10=0 
        sum=sum+r;
    }
    printf("\nsum is %d ",sum);
    return 0;
}

//
