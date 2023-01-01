#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<time.h>
int i,j;
int main_exit;
void closed();
void fordelay(int j);
void menu();
void new_acc();
void edit();
void transcat();
void see();
void erase();
void view_list();

struct date{
    int month,day,year;
};
struct {
    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposite;
    struct date withdraw;
}add,upd,check,rem,transaction;

unsigned int sec=0;
clock_t stopclock=CLOCKS_PER_SEC;

void main(){
    char pass[10],password[10]="MANSI20";
    int i=0;
    printf("\n\n\t Enter the password to login: ");
    printf("\033[8m");
    scanf("%s",pass);
    printf("\033c");
    if(strcmp(pass,password)==0){
        printf("\n\npassword match!! loading..");
        system("clear");
        fordelay(5);
        menu();
    }
    else{
        printf("\033c");
        printf("\n\n Wrong Password!!!");
        login_try:
        printf("\n Enter 1 to try again and 0 to exit: ");
        scanf("%d",&main_exit);
        if(main_exit==1){
            system("clear");
            main();
        }  
        else if(main_exit==0){
            closed();
        }
             }
    }

void menu(){
      int choice;
      printf("\033c");
      system("clear");
      printf("\n");
      printf("\33[1;31m");
      printf("\n\n\t\t\t CUSTOMER ACCOUNT BANKING MANAGMENT SYSTEM...");
      printf("\n\n\n\t\t      \033[1;32m WELCOME TO THE MANU ");
      printf("\033[0m");
      printf("\033[1;33m");
      printf("\n\n\t\t 1.Create new account \n\t2.Update informantion of existing account \n\t3.For transaction\n\t4.Check the details of existing account \n\t5.Remove existing account\n\t6.View coustomer's list\n\t7.Exit\n\n\n\n\t\t Enter your choice: ");
      scanf("%d",&choice);
      system("clear");
      printf("\033c");

     switch(choice)
     {
         case 1 : new_acc();
         break;
         case 2 : edit();
         break;
         case 3 : transcat();
         break;
         case 4 : see();
         break;
         case 5: erase();
         break;
         case 6: view_list();
         break;
         case 7: closed();
         break;
     }
}

void foredelay(int j){
    while(sec<j)
    {
    if(clock()> stopclock){
        stopclock+=1000000;
        printf(".");
        fflush(stdout);
        sec++;
    }
}
}

void new_acc()
{
    int choice;
    char acc_type[10];
    FILE *ptr;
    ptr=fopen("record.dat","a+");
    account_no :
    system("clear");
    printf("\t\t\t         ADD RECORD");
    printf("\n\n\n ENTER TODAY'S DATE (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&add.deposite.month,&add.deposite.day,&add.deposite);
    printf("Enter the account number: ");
    while(fscanf(ptr,"%d %s %d/%d/%d %d %d %s %s %lf %s %f %d/%d/%d \n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,acc_type,&add.amt,&add.deposite.month,&add.deposite.day,&add.deposite.year)!=EOF);
    {
        if(check.acc_no==add.acc_no)
        {
            printf("Account no.already in use!");
            goto account_no ;
        }
    }
    add.acc_no=check.acc_no;
    printf("\n Enter the name: ");
    scanf("%s",add.name);
    printf("\n Enter the date of the birth (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\n Enter the age: ");
    scanf("%d",&add.age);
}