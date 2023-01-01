//array is a collection of  similar data type
//allocating memory continously
//define by using common name
//each element of an array is acces by using index or subscript number
//index start from 0

//display of array
/*#include<stdio.h>
int main(){
    int arr[5],i;
    printf("enter any five numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}*/
//reverse
/*#include<stdio.h>
int main(){
    int arr[5],i;
    printf("enter any five numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n---------------------------------");
    for(i=4;i>=0;i--)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}*/
//even odd
/*#include<stdio.h>
int main(){
    int arr[10],even,odd,i;
    even=0;
    odd=0;
    printf("enter any ten numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        even++;
    }
    else{
         odd++;
    }
    }
    printf("total even numbers: %d",even);
    printf("\ntotal odd numbers are: %d",odd);
    return 0;
}*/

//linear search 
/*#include<stdio.h>
#define max 20
int main(){
       int arr[max];
       int n,i,search;
       int flag=0;
       printf("how many elements do you want in array");
       scanf("%d",&n);
 
       for(i=0;i<n;i++){
           scanf("%d",&arr[i]);
       }
       printf("enter element do you want to search: ");
       scanf("%d",&search);
       
       for(i=0;i<n;i++){
        if(arr[i]==search){
            flag=1;
            break;
        }
       }//end for
       if(flag){
           printf("%d element found at %d location",search,(i+1));
       }
       else{
           printf("\n %d element not found",search);
       }  
     return 0;
}*/

//enter any n no search for smallest grater and avg.of all no
/*#include<stdio.h>
int main(){
    int arr[20],i,n,large,small,sum=0;
    float avg;
    printf("\nenter the number of elements do you want in array: ");
    scanf("%d",&n);
    printf("\nenter the elements do you want in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=small=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>large)     //for large
        large=arr[i];

        if(arr[i]<small)         //for small
        small=arr[i];
    }
    for(i=0;i<n;i++){              //for average
        sum = sum+arr[i];
    }
        avg=sum/n;
    printf("\nThe smallest number is: %d  ",small);
    printf("\nThe largest number is: %d ",large);
    printf("\naverage of %d numbers  is %f: %d",n,avg);
    return 0;
}*/

//accept any n numbers and find even no and stored in given array display even and odd seperately
/*#include<stdio.h>
int main(){
    int arr[20],i ,n,even,odd,earr[20],oarr[20];
    printf("enter the number of elements do you want in array: ");
    scanf("%d",&n);
    int j=0;
    int k=0;
    printf("enter any %d nos in array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0){ 
            earr[j]=arr[i];
            j++;
        }
        else{
            oarr[k]=arr[i];
            k++;
        }
    }
    printf("\neven numbers: %d",j);
    for(i=0;i<j;i++){
        printf("%5d",earr[i]);
    }
    printf("\n odd numbers are: %d",k);
    for(i=0;i<k;i++){
        printf("%5d",oarr[i]);
    }
    return 0;
}*/

//enter any 10 no and desplay asending and desending order
//enter any 10 no and count how many no divisible by 3 and 5,how many divisible by 3 only,no divisible by 5 only,not divisible by 3 and 5
//enter any n no and count how many no are prime numbers
/*#include <stdio.h>
int isPrime(int num)
{
	int i; 
	int flag=0; 
	for(i=2; i<num/2; i++)
	{
		if(num%i ==0)
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
		return 0;
	else
		return 1;
}
int main()
{
	int loop,n;
	int arr[20];
     printf("how many elements do you want in array");
       scanf("%d",&n);
       printf("enter element do you want in array: ");
       scanf("%d",&arr[n]);


	//calculate length of the array
	int len = sizeof(arr)/sizeof(arr[0]);
	

	for(loop=0; loop<len; loop++)
	{
		printf("%3d - %s\n",arr[loop],(isPrime(arr[loop])?"Prime":"Not Prime"));
	}
	
	printf("\n");
	
	return 0;	
}*/

/*#include<stdio.h>
int main(){
    int arr[10],i,n,large,small,sum=0;
    int avg;
    printf("enter the number of element you want in array: ");
    scanf("%d",&n);

    printf("enter element for array: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    large=small=arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>large)    
        large=arr[i];

        if(arr[i]<small)         
        small=arr[i];
    }
    for(i=0;i<n;i++){             
        sum = sum+arr[i];
    }
        avg=sum/n;
        printf("\nsmallest number is: %d",small);
        printf("\nlargest number is: %d",large);
        printf("\naverage of %d numbers  is:%d ",n,avg);

}*/

//asending order program
#include <stdio.h>
int main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i){
      printf("%d\n", num[i]);
   }
}
