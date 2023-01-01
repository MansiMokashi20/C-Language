//simple display number program
/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d",i);
    }
    return 0;
}*/ 

//print a to z
/*#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++){
        printf("%c",i);
    }return 0;
}*/

//print even numbers
/*#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=10;i++){
        printf("%5d",i);
    }
    return 0;
}*/

//table of any number
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("enter eny number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",n,i,n*i);
    }
    return 0;
}*/

//factor program
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            printf("\n%d",i);
        }
    }
    return 0;
}

//factorial program
/*#include<stdio.h>
int main()
{
    int n,i,ans=1;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("factorial of %d is %d",n,ans);
    return 0;
}*/

//base,power program
/*#include<stdio.h>
int main(){
int base,exponent;
long long power=1;
int i;

printf("enter base: ");
scanf("%d",&base);
printf("enter exponent: ");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++){
    power=power*base;
}
printf("%d ^ %d = %d",base,exponent,power);
return 0;
}*/

//check prime or not
/*#include<stdio.h>
int main()
{
    int i,n,flag=1;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n % i==0){
        flag=0;
        break;
        } 
    }
    if(flag){ 
        printf("  %d is prime",n);
    }
    else{
        printf(" %d is not prime",n);
    }
    return 0;
    }*/

//fibonacci series program   0+1=1 1+2=3 3+4=7
/*#include<stdio.h>
int main()
{
    int i,j,k,cnt;
    i=0;
    j=1;
    printf("\n%d\t%d",i,j);
    for(cnt=1;cnt<=10;cnt++){
        k=i+j;
        printf("%5d",k);
        i=j;
        j=k;
    }
    return 0;
}*/

//perfect number
/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n % i==0){
        sum=sum+i;    
        } 
    }
    if(sum==n){ 
        printf("  %d is perfect number",n);
    }
    else{
        printf(" %d is not perfect number",n);
    }
    return 0;
    }*/


//123             1*10=10 2*10=20 3*10=30  10+20+30=60
/*#include<stdio.h>
int main(){
    int i,n,r,rev=0;
    printf("enter any number: ");
    scanf("%d",&n); 
    
    for(i=1;n!=0;i++){
        r=n%10;
        rev=rev+(r*10);
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}*/
 

 