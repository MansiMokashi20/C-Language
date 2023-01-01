#include<stdio.h>
#include<stdlib.h>
int main(){
    float c,b,r,h,ca,ta,ra;
    char ch;

    area:
    printf("\n-----------------------------------AREA APPLICATION---------------------------------");
    printf("\n c or C- area of circle");
    printf("\n t or T- area of triangle");
    printf("\n r or R- area of rectangle");
    printf("\nEnter your choice");
    ch=getch();                //to read a character insteed of taking scanf

    switch(ch)
    {
        case 'c' :
        case 'C' :
        printf("\nEnter radius of circle");
        scanf("%f",&r);
        ca=3.14*r*r;
        printf("\nArea of circle is: %f",ca);
        break;

        case 't' :
        case 'T' :
        printf("\nEnter base and height");
        scanf("%f%f",&b,&h);
        ta=0.5*b*h;
        printf("\nArea of triangle is: %f",ta);
        break;

        case 'r' :
        case 'R' :
        printf("\nEnter base and height");
        scanf("%f%f",&b,&h);
        ra=b*h;
        printf("\nArea of triangle is: %f",ra);
        break;
    }
    printf("\nDo you want to continue press y or n");
    ch=getch();
    if((ch=='y')||(ch='Y'))
    {
        goto area;
    }
    printf("\n==============THANK YOU==================");
    return 0;
}