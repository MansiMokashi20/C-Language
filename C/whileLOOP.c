
//simple program for while loop
/*#include<stdio.h>
int main()
{
    int i;
    i=10;                              //decleration of i
    while(i>=1)                       //condition of i
    {
        printf("\t%5d" ,i);   //printstatement
        i--;                  //for displaying next number
    }
    printf("\nTHANK YOU....");
    return 0;
}*/



//print a To z
/*#include<stdio.h>
int main()
{
    int i;
    i=65;                              //decleration of i
    while(i<=90)                       //condition of i
    {
        printf("\t%5c" ,i);   //printstatement
        i++;                  //for displaying next number
    }
    printf("\nTHANK YOU....");
    return 0;
}*/




//print a to z askii values with alphabates
/*#include<stdio.h>
int main()
{
    int i;
    
    i=65;
    while(i<=90)
    {
        printf("\n%d : %c\t|%d : %c",i,i,i+32,i+32);
        i++;
    }
    
    printf("\nTHANK YOU........");
    return 0;
}*/

//********print even number
/*#include<stdio.h>
int main(){
    int i;
    i=2;
    while(i<=20)
    {
        printf("\t%d",i);
        i=i+2;
    }
    return 0;
}*/


//displaying even number to 20
/*#include<stdio.h>
int main(){
    int i,sum=0;
    i=2;
    while(i<=20)
    {
        printf("\t%d",i);
        sum=sum+i;
        i=i+2;
    }
    return 0;
}*/

//table of any number
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter any numner: ");
    scanf("%d",&n);
    i=1;
    
    while(i<=10)
    {
        printf("\n%d\t*\t%d\t=\t%d",n,i,n*i);       //n=your input value
        i++;                                           //i= 1 to 10(bcoz i<=10)
    }                                                    //n*1= 4*2=8
    return 0;
    
}*/

//factor program
/*#include<stdio.h>
int main()
{
    int i,n,ans=1;
    printf("enter any number: ");
    scanf("%d",&n);
    i=2;
    while(i<n/2)
    {
        if("n%i==0"){
        printf("\t%d",i); 
        }
        i++;
    }
   return 0;
}*/

//enter any number and print factorial
//enter base and power and print ans
//enter any no. and check given no is prime or not
//enter any no and print reverse of no.
//enter a num and print sum of digit of no.
//enter any no and check it is amstrong no. or not
//enter any no and check it is neon or not