#include<stdio.h>
int main()
{
    int ch;
    NAMEBAR:
    printf("*********************WELCOME TO QUABY THEATOR**************************");
    printf("\n1-MARATHI MOVIES\n2-HINDI MOVIES\n3-ENGLISH MOVIES");
    printf("\nEnter your choice...");
    scanf("%d",&ch);

    switch(ch)                 //1
    {
        case 1:
        printf("\n1-COMEDY MOVIES\n2-HORRER MOVIES");
        printf("\nEnter your choice...");
        scanf("%d",&ch);
    
    switch(ch)              //1-1
    {
        case 1:
        printf("\n1-DE DHAKKA\n2-ZIMMA\n3-pandu");
        printf("\nEnter your choice...");
        scanf("%d",&ch);
        break;

        case 2:
        printf("\n1-LAPACHAPI\n2-AAHAT\n3-BALI");
        printf("\nEnter your choice...");
        scanf("%d",&ch);
        break;
    }
    
    case 2:
    
        printf("\n1-COMEDY MOVIES\n2-HORRER MOVIES");
        printf("\nEnter your choice...");
        scanf("%d",&ch);
    switch (ch)                  //1-2
    {
         case 1:
         printf("\n1-CHAALANG\n2-HOUSEFULL\n3-TOTAL DHAMAL");
         printf("\nEnter your choice...");
         scanf("%d",&ch);
         break;

         case 2:
         printf("\n1-HAUNTED\n2-RAAZ\n3-ROOHI");
         printf("\nEnter your choice...");
         scanf("%d",&ch);
         break;
    }

   
    case 3:
    
        printf("\n1-COMEDY MOVIES\n2-HORRER MOVIES");
        printf("\nEnter your choice...");
        scanf("%d",&ch);

    switch(ch)        //1-3
    {
         case 1:
         printf("\n1-DUE DATE\n2-BORAT\n3-CLUELESS");
         printf("\nEnter your choice...");
         scanf("%d",&ch);
         break;

         case 2:
         printf("\n1-CONJURING\n2-THE NUM\n3-NIGHT HOUSE");
         printf("\nEnter your choice...");
         scanf("%d",&ch);
         break;
    }
 } 

    return 0;
}
  

    