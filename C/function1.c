#include<stdio.h>
 
void factorial(){
      int n,i,ans=1;
    printf("\nenter any number for getting factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("\nfactorial of %d is %d",n,ans);
}
void fibbonaci(){
     int i,j,k,cnt;
    i=0;
    j=1;
    printf("\n%d\t%d",i,j);
    for(cnt=1;cnt<=10;cnt++){
        k=i+j;
    
        printf("%5d",k);
        i=j;
        j=k;
    }
}
void prime(){
    int i,n,flag=1;
    printf("\nenter any number to check prime or not: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n % i==0){
        flag=0;
        break;
        } 
    }
    if(flag){ 
        printf("\n %d is prime",n);
    }
    else{
        printf("\n%d is not prime",n);
    }
}
int main(){
    factorial();
    fibbonaci();
    prime();
    return 0;
}