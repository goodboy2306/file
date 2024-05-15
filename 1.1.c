#include <stdio.h>
struct book
{
 char Book_Title[20];
 char Author[20];
 float Price;
}B1;
int main()
{
 printf("Enter the name of book :- ");
 scanf("%s",&B1.Book_Title);
 printf("Enter the Author of book :- ");
 scanf("%s",&B1.Author);
 printf("Enter the price of book :- ");
 scanf("%f",&B1.Price);
 system("cls");
 printf("The name of book is %s",B1.Book_Title);
 printf("\nThe Author of book is %s",B1.Author);
 printf("\nThe price of book is %0.2f",B1.Price);
}
