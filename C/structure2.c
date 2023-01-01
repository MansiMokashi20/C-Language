//structure by using array...
#include<stdio.h>
struct student{
    int rno,sub1,sub2,sub3,total;
    char name[10];
    float perct;
};
int main(){
    int i;
     struct student stud[3];
     printf("\n\n\t\t\tENTER THE DATA HERE....");
     for(i=0;i<3;i++){
     printf("\nenter student rollno: ");
     scanf("%d",&stud[i].rno);
     printf("\nenter student name: ");
     scanf("%s",&stud[i].name);
     printf("\nenter subject1 mark: ");
     scanf("%d",&stud[i].sub1);
     printf("\nenter subject2 mark: ");
     scanf("%d",&stud[i].sub2);
     printf("\nenter subject3 mark: ");
     scanf("%d",&stud[i].sub3);
     stud[i].total=stud[i].sub1+stud[i].sub2+stud[i].sub3;
     stud[i].perct=stud[i].total/3;
     }
       
     for(i=0;i<3;i++){
         printf("\n-------------------------------------------------");
     printf("\n-------------------STUDENT MARKSHEET-------------------");
     printf("\n-------------------------------------------------");
     printf("\nrollno: %d",stud[i].rno);
      printf("\nname: %s",stud[i].name);
      printf("\nsub1: %d",stud[i].sub1);
      printf("\nsub2: %d",stud[i].sub2);
      printf("\nsub3: %d",stud[i].sub3);
      printf("\ntotal:%d",stud[i].total);
      printf("\npercantage:%f",stud[i].perct);
     } 
      
      
     return 0;

}



//pointer operator = *s1,   scanf("%d",&s1->name)