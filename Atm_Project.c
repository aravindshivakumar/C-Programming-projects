#include<stdio.h>
int amt=0, pin=1786;
char decide ;
void balance()
{
       printf("your bank balance is 00");
}
void deposit()
{
      int deposit_amt;
       printf("enter the amount to be deposited:\n");
       scanf("%d",&deposit_amt);
       amt+=deposit_amt;
       printf("\n success..! rs %d credited to your account",deposit_amt);
}
void withdraw()
{
      int pin_num,withdraw_amt;
      printf("\n enter the pin :\t");
     scanf("%d",&pin_num);
     if(pin_num==pin)
    {
         printf("\n enter the amount to withdraw:\t");
         scanf("%d",&withdraw_amt);
         if(withdraw_amt<=amt)
         {
                printf("\n Success! Please collect withdraw amount %d ",withdraw_amt);
                amt-=withdraw_amt;
          }
         else
         {
               printf("\n Insufficient amount");
          }
      }
      else
      {
             printf("\nIncorrect Pin");
         }
}
void pinchange()
{
      int oldpin,newpin1,newpin2;
      printf("enter the oldpin:\t");
      scanf("%d",&oldpin);
      printf("\n enter the newpin:\t");
      scanf("%d",&newpin1);
      printf("\n confirm new pin:\t");
      scanf("%d",&newpin2);
      while(newpin1!=newpin2)
      {
                printf("\n Print doesn't match with new pin1 \n Reenter the confirm pin");
                scanf("%d",&newpin2);
       }
}
int main()
{
 char decide;
int deposit_amt,withdraw_amt,oldpin;
int newpin1,newpin2,pin_num;
int choice;
do{
 printf("\n1.check balance \n2.deposit money\n3.withdraw money \n4.pinchange\n5.exit");
 printf("\nENTER YOUR choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
       case 1:
               balance();
                break;
      case 2:
              deposit();
               break;
      case 3:
                withdraw();
                break;
       case 4:
                pinchange();
                 break;
        case 5:
                printf("\nthankou..!");
                break;
         default:
                printf("enter the correct value");
                break;
 }
 printf("\ndo you want to continue(Y/N)");
 scanf(" %c",&decide);
}while(decide=='Y');
return 0;
}
