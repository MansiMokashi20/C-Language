//special inbuild function of string
#include<stdio.h>
#include<string.h>
int main(){
    int l;
    char str[10];
    printf("\n enter student name: ");
    scanf("%s",str);
    l=strlen(str);
    printf("\nlength of string:%d",l);
    printf("\nupper case: %s",strupr(str));
    printf("\nlower case: %s",strlwr(str));
    
    strcat(str,"friends");
    printf("\ncon cat:%s",str);
    return 0;
}