#include<stdio.h>
int main(){
    int empid;
    char name[20];
    char designation[20];
    char month[20];
    int year;
    char location[20];
    char bankname[10];

    float basicsal;
    float hra,ta;
    float totaladd;
    float pf,esi;
    float tax;
    float netsal;
    float annualincome;

    printf("ENTER EMPLOYEE ID: ");
    scanf("%d",&empid);
    printf("ENTER EMPLOYEE NAME: ");
    scanf("%s",&name);
    printf("ENTER DESIGNATION: ");
    scanf("%s",&designation);
    printf("ENTER MONTH: ");
    scanf("%s",&month);
    printf("ENTER YEAR: ");
    scanf("%d",&year);
    printf("ENTER LOCATION: ");
    scanf("%s",&location);
    printf("ENTER BANK DETAILS: ");
    scanf("%s",&bankname);
    printf("ENTER BASIC SALARY: ");
    scanf("%f",&basicsal);

    hra=basicsal*0.05;
    ta=basicsal*0.05;
    totaladd=basicsal+hra+ta;
    pf=basicsal*0.12;
    esi=basicsal*0.0075;
    tax=pf+esi;
    netsal=totaladd-tax;
    annualincome=netsal;
    printf("\n------------------------------------------------------------------------------");
    printf("\nEMPLOYEE ID\t\t\t :%d",empid);
    printf("\n------------------------------------------------------------------------------");
    printf("\nNAME IS\t\t\t\t :%s",name);
    printf("\n------------------------------------------------------------------------------");
    printf("\nDESIGNATION\t\t\t :%s",designation);
    printf("\n------------------------------------------------------------------------------");
    printf("\nMONTH\t\t\t\t :%s",month);
    printf("\n------------------------------------------------------------------------------");
    printf("\nYEAR\t\t\t\t :%d",year);
    printf("\n------------------------------------------------------------------------------");
    printf("\nLOCATION\t\t\t :%s",location);
    printf("\n------------------------------------------------------------------------------");
    printf("\nBANK DETAILS\t\t\t :%.2f",bankname);
    printf("\n------------------------------------------------------------------------------");
    printf("\nBASIC SALARY\t\t\t :%.2f",basicsal);
    printf("\n------------------------------------------------------------------------------");
    printf("\nHRA OF AN EMPLOYEE\t\t :%.2f",hra);
    printf("\n------------------------------------------------------------------------------");
    printf("\nTA OF AN EMPLOYEE\t\t :%.2f",ta);
    printf("\n------------------------------------------------------------------------------");
    printf("\nTOTAL INCOME OF AN EMPLOYEE\t :%.2f",totaladd);
    printf("\n------------------------------------------------------------------------------");
    printf("\nPF OF AN EMPLOYEE\t\t :%.2f",pf);
    printf("\n------------------------------------------------------------------------------");
    printf("\nESI OF AN EMPLOYEE\t\t :%.2f",esi);
    printf("\n------------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------------");
    printf("\nTAX OF AN EMPLOYEE\t\t :%2f",netsal);
    printf("\n------------------------------------------------------------------------------");
    printf("\nANNUAL INCOME OF EMPLOYEE\t :%.2f",annualincome);
    printf("\n------------------------------------------------------------------------------");
    printf("\n*********************************************THANK YOU****************************************");
    return 0;
}
    