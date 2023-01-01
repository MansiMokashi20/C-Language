#include<stdio.h>
#define max 20
int main(){
    int arr1[20],arr2[20],arru[20],arri[20],arrd1[20],arrd2[20];
    int i,n,ch;
    int len1,len2,j,k=0,f=0;
    do
     {
         printf("\n1-create array1 \n2-create array2\n3-union\n4-intersection\n5-arr1-arr2\n6-arr2-arr1");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             printf("enter no of elements do you want in array1: ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&arr1[1]);
            }
            break;
            case 2:
             printf("enter no of elements do you want in array2: ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&arr2[i]);
            }
            break;
            case 3:
            for (i = 0; i < len1; i++) {
        arru[k] = arr1[i];
        k++;
    }

    for (i = 0; i < len2; i++) {
        f = 0;
        for (j = 0; j < len1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }
        }

        if (f == 0) {
            arru[k] = arr2[i];
            k++;
        }
    }
    printf("Union of two array is:");
    for (i = 0; i < k; i++) {
        printf("%d ", arru[i]);
    }


     }
     printf("Would you like to countinue press 1");
     scanf("%d",&ch);
    
}while(ch==1);

}