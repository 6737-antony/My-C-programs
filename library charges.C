//program to calculate ovrrdue charges for books in library
/*
the charges are as follows
upto 7 days -sh20
8-14 days -sh50
15 days or more -sh100
*/
#include<stdio.h>
int main()
{
int overdue_days;
int number_of_books;
int fine;
printf("enter overdue days:\n");
scanf("%d",&overdue_days);
printf("enter number_of_books:\n");
scanf("%d",&number_of_books);
if (overdue_days<=7)
{ fine=number_of_books*20;}
else if ( overdue_days<=14)
{fine=number_of_books *50;}
  else
  { fine=number_of_books*100;}
printf("the overdue fine is :%d\n", fine);
return 0;
}