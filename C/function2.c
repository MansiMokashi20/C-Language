//type 1=without argument and without return type
#include<stdio.h>
 void cicleArea();     //optional 
 int main(){
     circleArea();
     return 0;
 }
 void circleArea()
 {
     float r,ca;
     printf("enter radius for circle: ");
     scanf("%f",&r);

     ca=3.14*r*r;
     printf("\nArea of circlr is: %f",ca);
 }

 //type 2=with argument and without return type
/*#include<stdio.h>
#include<stdlib.h>
 void cicleArea(float);     //optional 
 int main(){
     float r;
     printf("enter radius for circle: ");
     scanf("%f",&r);
     circleArea(r);
     return 0;
 }
 void circleArea(float r)          //if void is there no value will be return
 {                          //if there is no void it will return something value
     float ca;
     ca=3.14*r*r;
     printf("\nArea of circle is: %f ",ca);
 }*/