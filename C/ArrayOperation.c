#include<stdio.h>
#define max 20
int main(){
    int ch,n,i,flag=0,search,ele,loc,j,temp;
    int arr[max];

    do{
        flag=0; 
        printf("\n1-create\n2-display\n3-search\n4-insert\n5-delete\n6-sorting");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter no of elements do you want in array: ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            break;
            case 2:
             for(i=0;i<n;i++){
                printf("%5d",arr[i]);
            }
            break;
            case 3:
            printf("enter element do you want to search: ");
       scanf("%d",&search);  
       for(i=0;i<n;i++){
           if(arr[i]==search){
               flag=1;
               break;
           }
       }
       
       if(flag){
           printf("%d element found at %d location",search,(i+1));
       }
       else{
           printf("\n %d element not found",search);
       }
       break;
       case 4:
        printf("enter element and location to insert in array: ");
        scanf("%d%d",&ele,&loc);
        for(i=n-1;i>=loc-1;i--){
            arr[i+1]=arr[i];
        }
        arr[i+1]=ele;     //for store new inserted value
        n++;                //for incresing no of location of new inserted element+++++++++++++++++++++++++ 
        break;
      case 5:
      printf("\nenter location to delete element: ");
      scanf("%d",&loc);
      ele=arr[loc-1];
      for(i=loc-1;i<n;i++){
          arr[i]=arr[i+1];
      }
      n--;
      printf("\n%d element is deleted from array",ele);
      break;
      case 6:
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
              if(arr[i]>arr[j]){
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
          }
      }
      printf("sorted array: ");
      for(i=0;i<n;i++){
          printf("%5d",arr[i]);
      }
        }
        printf("\ndo you want to continue press 1");
        scanf("%d",&ch);
        
        }while(ch==1); 
    
   printf("****THANK YOU****");
    return 0;
}
    
