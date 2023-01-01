#include <stdio.h>

int main() {

    // decalaration

    int rollno;
    char studentname[10];
    int sub1,sub2,sub3,total;
    float percent;

    // enter input

    printf("Enter your Roll no: ");
    scanf("%d",&rollno);

    printf("Enter your Name: ");
    scanf("%s",&studentname);

    printf("Enter marks of subject 1: ");
    scanf("%d",&sub1);

    printf("Enter marks of subject 2: ");
    scanf("%d",&sub2);

    printf("Enter marks of subject 3: ");
    scanf("%d",&sub3);

    //calculation

    total = sub1+sub2+sub3;
    percent = (total/300.0)*100;

   

    printf("\nrollno:%d",rollno);
    printf("\nstudent name :%s",studentname);
    printf("\nsub1 :%d",sub1);
    printf("\nsub2 :%d",sub2);
    printf("\nsub3 :%d",sub3);
    printf("\ntotal :%d",total);
    printf("\npercent :%f",percent);

    return 0;

}