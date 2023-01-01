//structure is collection of diffrent data type.
#include<stdio.h>
struct student{
    int rno,sub1,sub2,sub3,total;
    char name[10];
    float perct;
};
int main(){
     struct student stud;
     printf("\nsize od structure is:%d",sizeof(stud));
     printf("\nenter student rollno: ");
     scanf("%d",&stud.rno);
     printf("\nenter student name: ");
     scanf("%s",&stud.name);
     printf("\nenter subject1 mark: ");
     scanf("%d",&stud.sub1);
     printf("\nenter subject2 mark: ");
     scanf("%d",&stud.sub2);
     printf("\nenter subject3 mark: ");
     scanf("%d",&stud.sub3);
     stud.total=stud.sub1+stud.sub2+stud.sub3;
     stud.perct=stud.total/3;
     printf("\nrollno: %d",stud.rno);
      printf("\nname: %s",stud.name);
      printf("\nsub1: %d",stud.sub1);
      printf("\nsub2: %d",stud.sub2);
      printf("\nsub3: %d",stud.sub3);
      printf("\ntotal:%d",stud.total);
      printf("\npercantage:%f",stud.perct);
        
      
     return 0;

}