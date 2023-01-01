//length of string 
/*#include<stdio.h>
int main(){
    char str[10];
    int i,l=0;
    printf("enter any string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
           l++;
    }
    printf("length of string is:%d",l);
    return 0;
}*/

//reverse of string
/*#include<stdio.h>
int main(){
    char str[10];
    int i,l=0;
    printf("enter any string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
           l++;
    }
    printf("length of string is:%d\n",l);
    for(i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}*/

//length of string
/*#include<stdio.h>
int main(){
    char name[20];
    int i;
    printf("\nenter any name: ");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++);
    printf("length of given name: %d",i);
}*/

//enter name and count consonents and vowels in name
/*#include<stdio.h>
int main(){
    int i,l;
    int consonent=0,vowel=0;
    char s[20];
    printf("enter any name:");
    scanf("%s",s);
      for(i=0;s[i]!='\0';i++);
    printf("length of given name: %d",i);
    for(i=0;s[i];i++){
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U')
            vowel++;
            
            else
            consonent++;
        }
    }
    printf("vowel=%d\n",vowel);
    printf("consonent=%d\n",consonent);
}*/

//check string is palindrome or not
/*#include<stdio.h>
#include<string.h>
int main(){
    int i,length;
    char string1[20];
    int flag=0;
    
     printf("enter any name:");
    scanf("%s",string1);
     length=strlen(string1);
    for(i=0;i<length;i++){
        if(string1[i]!=string1[length-i-1]){
             flag=1;
             break;
        }
    }
    if(flag){
        printf("%s is not pallindrome ",string1);
    }
    else{
        printf("%s is pallindrome",string1);
    }
}*/

//convert string in upper case
/*#include<stdio.h>
int main(){
    int i;
    char name[20];
     printf("enter any name:");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++){
        if((name[i]>=97) && (name[i]<=122))
        printf("%c",name[i]-32);
        else if((name[i]>=65) && (name[i]<=90)){
            printf("%c",name[i]);
        }
    }
    return 0;
}*/

//enter any string and print substring of given name
/*#include <stdio.h>
 
int main()
{
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("enter a string\n");
   gets(string);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub); 
 
   return 0;
}*/

//copy content of string1 to string2
/*#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];  
    int i;
 
    printf("Enter any string: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)  //  or  for(i=0;s1[i];i++)
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';
 
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
 
 
    return 0;
}*/

//enter two string and print greater string
/*#include <string.h>
int main()
{
    char s1[1000],s2[1000];  
    int i,c=0;
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    if(strlen(s1)==strlen(s2))
    {
    	for(i=0;s2[i]!='\0';i++)  
        {
        	if(s1[i]==s2[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("strings are equal");
        else
          printf("strings are not equal");
    }
    else
     printf("strings are not equal");
    return 0;
}*/

//concate of string
#include <stdio.h>  
int main()  
{  
    char first_string[20];   
    char second_string[20]; 
    int i;    
    printf("Enter the first string");  
    scanf("%s",first_string);  
    printf("\nEnter the second string");  
    scanf("%s",second_string);  
    for(i=0;first_string[i]!='\0';i++);   
      
      
    for(int j=0;second_string[j]!='\0';j++)  
    {  
        
        first_string[i]=second_string[j];  
        i++;  
    }  
    first_string[i]='\0';  
   printf("After concatenation, the string will be: %s", first_string);  
return 0;  
}