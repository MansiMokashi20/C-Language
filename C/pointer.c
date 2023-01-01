//array with pointers
/*#include<stdio.h>
int main(){
    int i;
    int arr[5]={10,20,30,40,50};
    int*ptr=&arr[0];
    printf("\n%d",*ptr);
    printf("\n%d",*ptr+1);
    printf("\n%d",*(ptr+1));
    printf("\n%d",*(ptr+3));
    printf("\n%d",*(ptr+0));

    for(i=0;i<5;i++){
        printf("\n%u\t:%d",ptr+i,*(ptr+i));
    }
    //change the address of pointer
    for(i=0;i<5;i++){
        printf("\n%d\t%u",*ptr,ptr);
        ptr++;
    }
    ptr--;     //if u are not putting this garbage value will be displayed
    printf("\ndata in reverse direction");
     for(i=0;i<5;i++){
        printf("\n%d\t%u",*ptr,ptr);
        ptr--;
    }
    return 0;
}*/

//addition by using pointer
/*#include<stdio.h>
int main(){
int n2,n1,add;
int *p1,*p2,*p3;
p1=&n1;
p2=&n2;
p3=&add;
printf("enter any two values: ");
scanf("%d%d",p1,p2);
*p3=*p1+*p2;
printf("\naddition of %d and %d =%d",*p1,*p2,*p3);
return 0;
}*/

//simple pointer 
/*#include<stdio.h>
int main(){
    int n1=10;
    int *ptr;
    ptr=&n1;
    int **ptr2=&ptr;
    printf("\nvalue of n1 is:%d",n1);
    printf("\naddress of n1 is: %u",&n1);
    printf("\n\nvalue of n1 using pointer var is : %d",*ptr);
    printf("\naddress of n1 using pointer var is :%u",ptr);

}*/

//2d array by pointers
/*#include<stdio.h>
int main(){
    int arr[3][3]={{10,20,30},
    {40,50,60},
    {70,80,90}};
    int *ptr=&arr;
    printf("\n%d",*(ptr+3));
    printf("\n%d",*(ptr+0));
    printf("\n%d",*(ptr+2));
    printf("\n%d",*(ptr+0)+1);
    printf("\n%d",(*(ptr+0))+1);
    printf("\n%d",(*(ptr+0)+1)+1);
     printf("\n%d",(*(ptr+3)+1)+1);
}*/

/*#include<stdio.h>
int main(){
    char *ptr;
    char name[10];
    int i;
    puts("enter your name: ");
    gets(name);

    ptr=&name;
    for(i=0;*ptr!='\0';i++){
        ptr++;
    }
    printf("\nLength of string is:%d",i);

    return 0;
}*/

/*#include<stdio.h>
int main(){
    char *ptr;
    char name[10];
    int i;
     
    puts("enter your name: ");
    gets(name);

    ptr=&name;
    for(i=0;*ptr!='\0';i++){
        ptr++;
    }
     printf("\nLength of string:%d",i);
    return 0;
}*/
 
    