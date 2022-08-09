//Program for simple calculator
#include<stdio.h>
int output;
calculator(int num1,int num2,int choice)
{
switch(choice)
{
//Code snippet for addition 
case 1:
output=num1+num2;
printf("\n%d",output);
break;
//Code snippet for subtraction 
case 2:
output=num1-num2;
printf("\n%d",output);
break;
//Code snippet for multiplication
case 3:
output=num1*num2;
printf("\n%d",output);
break;
//Code snippet for division
case 4:
output=num1/num2;
printf("\n%d",output);
break;
//Code snippet for modulus
case 5:
output=num1%num2;
printf("\n%d",output);
break;
//Code snippet for Exit choice
case 6:
printf("Thank you....!");
break;
//Code snippet for invalid choice
default:
printf("\nEnter valid choice\n");
break;
}
}
//Code snippet for main program
int main()
{
	printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~");
	printf("\n\t\t\t\t\t\tSIMPLE CALCULATOR");
	printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~");
int num1,num2,choice;
char decide;
do{
printf("\nEnter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
printf("\nChoose an operation\n");
printf("1.ADD \n2.SUB \n3.MULTIPLY\n4.DIVIDE\n5.Modulas\n6.Exit");
printf("\nenter your choice:");
scanf("\n%d",&choice);
calculator(num1,num2,choice);
printf("\nDo you want to continue (Y/N)");
scanf(" %c",&decide);
}while(decide=='Y');
}
