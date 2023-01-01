/*#include<stdio.h>
int main(){
    float r,h,b,ca,ta,ra;
    int ch;
    printf("\n---------------welcome to area app------------");
    do{
        printf("\n1-area of circle\n2-area of triangle\n3-area of rectangle");
    printf("\nenter your choice");
    scanf("%d",&ch);
     switch(ch){
         case 1:
          printf("enter radius  for area of circle: ");
         scanf("%f",&r);
         ca=3.14*r*r;
         printf("area of circle: %f",ca);
         break;

         case 2:
         printf("enter height and breadth for area of triangle: ");
         scanf("%f%f",&b,&h);
         ta=(b*h)/2;
         printf("area of triangle: %f",ta);
         break;

         case 3:
         printf("enter height and bridth for area of rectangle: ");
         scanf("%f%f",&b,&h);
         ra=h*b;
         printf("area of rectangle: %f",ra);
         break;
         default:
         printf("INVALID CHOICE");  
     }
      printf("\npress 1 if you want to continue");
    scanf("%d",&ch);
}while (ch==1);

     printf("***************THANK YOU***************");
     return 0;
}*/


/*#include<stdio.h>
int main(){
    int i,n,ans=1;
    int ch;
    printf("*********************WELCOME IN MATHS CALCULATION SERIES************************");
    do{
        printf("\n1-print a to z\n2-print even numbers\n3-table of any number\n4-factor of any number\n5-factorial of any number\n6-base power of any number\n7-check prime or not\n8-fibonacci series\n9-perfect number\n10-reverse of number");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
    for(i=65;i<=90;i++){
        printf("%c",i);
    }
    break;
    case 2:
    for(i=2;i<=10;i++){
        printf("%5d",i);
    }
    break;
    case 3:
     printf("enter eny number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",n,i,n*i);
    }
    break;
    case 4:
     printf("enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            printf("\n%d",i);
        }
    }
    break;
    case 5:
    
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("factorial of %d is %d",n,ans);
    break;
    case 6:
    int base,exponent;
  long long power=1;
  printf("enter base: ");
  scanf("%d",&base);
  printf("enter exponent: ");
  scanf("%d",&exponent);
for(i=1;i<=exponent;i++){
    power=power*base;
 }
  printf("%d ^ %d = %d",base,exponent,power);
  break;
  case 7:
  int flag =1;
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
    break;
    case 8:
     int j,k,cnt;
    i=0;
    j=1;
    printf("\n%d\t%d",i,j);
    for(cnt=1;cnt<=10;cnt++){
        k=i+j;
        printf("%5d",k);
        i=j;
        j=k;
    }
    break;
    case 9:
     int n,sum=0;
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
    break;
    case 10:
    int r,sum=0;
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
    break;
         default:
         printf("INVALID CHOICE");  
     
      printf("\npress 1 if you want to continue");
    scanf("%d",&ch);
}while (ch==1);
    
     printf("***************THANK YOU***************");
     return 0;
}*/     