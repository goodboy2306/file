#include <stdio.h>
union library
{
 char Book_Title[20];
 char Author[20];
 float Price;
 int flag;
}B1;
int main()
{
 printf("Enter the name of book :- ");
 scanf("%s",&B1.Book_Title);
 printf("\nThe name of book is %s",B1.Book_Title);
 printf("\n\nEnter the Author of book :- ");
 scanf("%s",&B1.Author);
 printf("\nThe Author of book is %s",B1.Author);
 printf("\n\nEnter the price of book :- ");
 scanf("%f",&B1.Price);
 printf("\nThe price of book is %0.2f",B1.Price);
 printf("\n\nEnter the value of flag :- ");
 scanf("%d",&B1.flag);
 if(B1.flag==1)
 printf("\nThe book is issued ");
 else if(B1.flag==0)
 printf("\nThe book is not issued ");
 else
 printf("\Enter the value of flag as 0 or 1");
}
