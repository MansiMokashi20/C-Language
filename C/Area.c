#include<stdio.h>
int main(){
    float r,h,b,ca,ta,ra;
    int ch;
    printf("\n---------------welcome to area app------------");

    menu:
    
    
    printf("\n1-area of circle\n2-area of triangle\n3-area of rectangle");
    printf("\nenter your choice");
    scanf("%d",&ch);
     
    if(ch==1){
         printf("enter radius  for area of circle: ");
         scanf("%f",&r);
         ca=3.14*r*r;
         printf("area of circle: %f",ca);
    }
    else if(ch==2){
        printf ("enter height and bridth for area of triangle: ");
        scanf("%f%f",&b,&h);
        ta=(b*h)/2;
        printf("area of triangle: %f",ta);
    }
    else if(ch==3){
        printf("enter height and bridth for area of rectangle: ");
        scanf("%f%f",&h,&b);
        ra=h*b;
        printf("area of rectangle: %f",ra);
    }   
    else{
        printf("invalid choice");
    } 
    printf("\npress 1 if you want to continue");
    scanf("%d",&ch);
    if(ch==1){
        goto menu;
    }
    printf("\n******THANK YOU******");  

         return 0;
     
}