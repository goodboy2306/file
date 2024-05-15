#include<stdio.h>
int main()
{
 FILE *f1,*f2,*f3;
 char d1[100],d2[100],d3[100];
 f1=fopen("1.txt","r");
 f2=fopen("2.txt","r");
 f3=fopen("3.txt","w");
 if((f1==NULL )|| (f2==NULL))
 printf("Error in opening the file");
 else
 printf("File open successful");
 while(fscanf(f1,"%s",d1)!=EOF)
 {
 fprintf(f3,"\t%s",d1);
 }
 while(fscanf(f2,"%s",d1)!=EOF)
 {
 fprintf(f3,"\t%s",d1);
 }
}
