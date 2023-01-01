#include<stdio.h>
int main(){
    int id,salary;
    char name[10];
    float pf,hra,ta,gs;


    printf("\n*************************WELCOME TO WIPRO COMPANY****************************");

    printf("\nenter name of employee: ");
    scanf("%s",&name);

    printf("enter id of  employee: ");
    scanf("%d",&id);

    printf("enter salary of employee: ");
    scanf("%d",&salary);

    pf=salary*0.05;
    hra=salary*0.04;
    ta=salary*0.03;
    gs=salary+hra+ta+pf;
    printf("\n----------------------payment information-------------------------");
    printf("\nname\tid\tsalary\tpf\t\thra\tta\tgs\t");
    printf("\n--------------------------------------------");
    printf("\n%s\t%d\t%d\t%f\t%.2f\t%.2f\t%f",name,id,salary,pf,hra,ta,gs);
    printf("\n--------------------------------------------------------");
    printf("\n---------------------THANK YOU-----------------");
    
}