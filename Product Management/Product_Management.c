//Product management program
#include<stdio.h>
#include<string.h>
struct purchase
//Declaring variable
{
int date,month,year,price;
char category[10],product[10];
}p[3];
int main()
//Declaring variable for user input
{
int i,choice,totprice=0,userdate,usermonth,useryear,userprice,r;
int n;
char usechoice[10];
//Getting inputs for date,month,year,category,product and price from user
printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~");
printf("\n\t\t\t\t\t\tPRODUCT MANAGEMENT");
printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~");
printf("\nENTER THE NUMBER OF ITEM TO BE ADDED:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nENTER THE PRODUCT DATE :");
scanf("%d",&p[i].date);
printf("\nENTER THE PRODUCT MONTH :");
scanf("%d",&p[i].month);
printf("\nENTER THE PRODUCT YEAR :");
scanf("%d",&p[i].year);
printf("\nENTER THE PRODUCT CATEGORY:");
scanf("%s",&p[i].category);
printf("\nENTER THE PRODUCT NAME :");
scanf("%s",&p[i].product);
printf("\nENTER THE PRODUCT PRICE :");
scanf("%d",&p[i].price);
}
//Displaying the given data
printf("\n Date \tmonth \tyear \t\tcategory \t\tproduct \t\tprice");
for(i=0;i<n;i++)
{
printf("\n %d \t%d \t%d \t\t%s \t\t\t%s \t\t\t%d" ,p[i].date,p[i].month,p[i].year,p[i].category,p[i].product,p[i].price);
}
int rpt=1;
while(rpt==1)
{
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
//Code snippet for listing out products by different field
printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~");
printf("\n\t\t\t\t\t\tLIST OUT-PRODUCTS");
printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~");
printf("\n\n1.PRODUCT CATEGORY \n2.PRODUCT NAME \n3.PRODUCT DATE \n4.PRODUCT MONTH \n5.PRODUCT YEAR \n6.PRODUCT DATE-MONTH-YEAR");
printf("\n\nENTER YOUR CHOICE:");
scanf("%d",&choice);
//Code snippet for displaying products in category field
if(choice==1)
{
printf("\nENTER THE CATEGORY:");
scanf("%s",&usechoice);
{
for(i=0;i<n;i++)
{
r=strcmp(p[i].category,usechoice);
if(r==0)
{
totprice=p[i].price;
printf("\nTHE EXPENCES IN THE SELECTED CATEGORY IS:%d",totprice);
}
}
}
}
//Code snippet for displaying products in product field
if(choice==2)
{
printf("\nENTER THE PRODUCT:");
scanf("%s",&usechoice);
{
for(i=0;i<n;i++)
{
r=strcmp(p[i].product,usechoice);
if(r==0)
{
totprice=p[i].price;
printf("\nTHE EXPENCES IN THE SELECTED PRODUCT IS:%d",totprice);
}
}
}
}
//Code snippet for displaying products in date field
if(choice==3)
{
printf("\nENTER THE PRODUCT DATE:");
scanf("%d",&userdate);
for(i=0;i<n;i++)
{
 if(p[i].date==userdate)
{
  totprice=p[i].price;
  printf("\nTHE EXPENCES IN THE SELECTED DATE IS:%d",totprice);
}
}
}
//Code snippet for displaying products in month field
if(choice==4)
{
printf("\nENTER THE PRODUCT MONTH:");
scanf("%d",&usermonth);
for(i=0;i<n;i++)
{
if(p[i].month==usermonth)
{
totprice=p[i].price;
printf("\nTHE EXPENCES IN THE SELECTED MONTH IS:%d",totprice);
}
}
}
//Code snippet for displaying products in year field
if(choice==5)
{
printf("\nENTER THE PRODUCT YEAR:");
scanf("%d",&useryear);
for(i=0;i<n;i++)
{
if(p[i].year==useryear)
{
totprice=p[i].price;
printf("\nTHE EXPENCES IN THE SELECTED YEAR IS:%d",totprice);
}
}
}
//Code snippet for displaying products in date,month,year field
if(choice==6)
{
printf("\nENTER THE DATE:");
scanf("%d",&userdate);
printf("\nENTER THE MONTH:");
scanf("%d",&usermonth);
printf("\nENTER THE YEAR:");
scanf("%d",&useryear);
for(i=0;i<n;i++)
{
if(p[i].date==userdate&&p[i].month==usermonth&&p[i].year==useryear)
{
totprice=p[i].price;
printf("\nTHE EXPENCES IN THE SELECTED DATE/MONTH/YEAR IS:%d",totprice);
}
}
}
printf("\n\nDO YOU WANT TO CONTINUE");
printf("\n1.YES");
printf("\n2.NO");
printf("\nENTER YOUR CHOICE:");
scanf("%d",&rpt);
}
return 0;
}
