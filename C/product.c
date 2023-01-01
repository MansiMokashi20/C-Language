#include<stdio.h>
int main(){
    int id,price,qyt,total;
    float cgst,sgst,finaltotal;
    char productname[10];

    printf("********************welcone to our shop******************************\n");
    printf("enter product name: ");
    scanf("%s",&productname);

    printf("enter product id: ");
    scanf("%d",&id);
    printf("enter product quantity: ");
    scanf("%d",&qyt);
    
    printf("enter price of product: ");
    scanf("%d",&price);

    total=price*qyt;
    cgst=total*0.6;
    sgst=total*0.6;
    finaltotal=total+cgst+sgst;
    
    printf("\n-----------------------BILL-------------------------");
	printf("\nproductname\tid\tqyt\tprice\tcgst\tsgst\ttotal\tfinaltotal");
	printf("\n------------------------------------------------");
	printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f",productname,id,qyt,price,total,cgst,sgst,finaltotal);
	printf("\n------------------------------------------------");
    return 0;
}


