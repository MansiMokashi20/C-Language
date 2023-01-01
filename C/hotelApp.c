#include<stdio.h>
int main(){
    int ch,o,ono;
    int total=0;
    int cnt=0;
    float  cgst,sgst,finaltotal;
    menu:
    printf("\n1-Starters\n2-VegMenu\n3-NonVeg");
    printf("\nEnter your choice...");
    scanf("%d",&ch);

    if(ch==1)
    {
        starters:
        printf("************************WELCOME TO STARTERS MENU**************************");
        printf("\n1-Gobi manchurian\t:200");
        printf("\n2-pakode\t:50");
        printf("\n3-chilli potato\t:300");

        printf("\nEnter order number");
        scanf("%d",&ono);

        if(o==1){
        
            total=total+200;
        }
        else if(o==2)
        {
            total=total+50;
        }
        else if(o==3)
        {
            total=total+300;
        }
        else{
            printf("\nInvalid order number");

        }
        if(o<=3)
        cnt++;

        printf("\n do you want to order starters again press 1");
        scanf("%d",&ch);

        if(ch==1)
        {
            goto starters;
        }
    }
    else 
    {
        printf("\nInvalid order..");
    }
    printf("\nDo you want to main menu again press 2");
    scanf("%d",&ch);
    if(ch==1)
    {
        goto menu;
    }
    if(ch==2)
    {
        VEGMenu:
        printf("************************WELCOME TO VEG MENU**************************");
        printf("\n1-fried rice\t:200");
        printf("\n2-veg thali\t:350");
        printf("\n3-paneer bhurji\t:300");

        printf("\nEnter order number");
        scanf("%d",&ono);

        if(o==1)
        
            total=total+200;
        
        else if(o==2)
        {
            total=total+350;
        }
        else if(o==3)
        {
            total=total+300;
        }
        else{
            printf("\nInvalid order number");

        }
        if(o<=3)
        cnt++;

        printf("\n do you want to order starters again press 1");
        scanf("%d",&ch);

        if(ch==2)
        {
            goto VEGMenu;
        }
    }
    else 
    { 
        printf("\nInvalid order..");
    }
    printf("\nDo you want to main menu again press 2");
    scanf("%d",&ch);
    if(ch==1)
    {
        goto menu;
    } 
    if(cnt>=1)
    {
        cgst=total*0.06;
        sgst=total*0.06;
        finaltotal=total+cgst+sgst;
        printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!BILL!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("\n\t\tTotal Item\t\t: %d",cnt);
        printf("\n\t\tTotal Amount\t\t:%d",total);
        printf("\n\t\tCGST\t\t\t: %f",cgst);
        printf("\n\t\tSGST\t\t\t: %f",sgst);
        printf("\n\t\tFinal Total\t\t: %f",finaltotal);
    }
     else
     {
         printf("\nNO ORDER.....");
     }
     printf("\n**************************************THANK YOU............VISIT AGAIN**********************");
     return 0;
    
}