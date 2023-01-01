//type3=without argument with return type
 /*#include<stdio.h>
 float circlrArea();
 int main(){
     float ca;
     ca=circlrArea();
     printf("\narea of circle is: %f",ca);
     return 0;
 }
 float circlrArea()
 {
     float r,ca;
     printf("\nenter radius of circle");
     scanf("%f",&r);
     ca=3.14*r*r;
     return ca;
 }*/

 //type 4=with argument with return type
 /*#include<stdio.h>
 float circleArea(float);
 int main(){
     float ca;
     float r;
     printf("\nenter radius of circle");
     scanf("%f",&r);
     ca=circleArea(r);
      printf("\narea of circle is: %f",ca);
      return 0;
 }
 float circleArea(float r){
     float ca;
     ca=3.13*r*r;
     return ca;
 }*/

//call by value functions
/*#include<stdio.h>
int main(){
    int n1,n2;
    n1=10;
    n2=30;
    swap(n1,n2);
   printf("\nvalue of n1 :%d",n1);
   printf("\nvalue of n2 :%d",n2);
    return 0;
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nvalue of x is:%d",x);
}*/

//call by refrence
#include<stdio.h>
#include<string.h>
void swap(int *,int *);           //optional code
int main(){
    int n1,n2;
    n1=10;
    n2=30;
    swap(&n1,&n2);
   printf("\nvalue of n1 :%d",n1);
   printf("\nvalue of n2 :%d",n2);
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nvalue of x is:%d",*x);
     printf("\nvalue of y is:%d",*y);
} 
