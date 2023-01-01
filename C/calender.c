#include<stdio.h>
#include<stdlib.h>
int main(){
       system("color 3F");
       int year,monthDay,daysInMonth,month,day;
       printf("\nEnter your desired year:");
        scanf("%d",&year);
        char *months[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AGUST","SEPTEMBER","OCTOMBER","NOVEMBER","DECEMBER"};
        monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
        if((year%4==0&&year%100!=0)||year%400==0)
        monthDay[]=29;
        
        for(month=0;month<12;month++){
            daysInMonth=monthDay[month];
            printf("\n\n______________%s______________\n",months[month]);
            printf("\n SUN MON TUE WED THRUS FRI SAT ");
for(day=1;day<=daysInMonth;day++){
    printf("%5d",day);
}
        }
       
}