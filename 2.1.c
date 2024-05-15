#include <stdio.h>
void reverseString(char *str) {
 int length = strlen(str);
 for (int i = 0; i < length / 2; i++) {
 char temp = str[i];
 str[i] = str[length - i - 1];
 str[length - i - 1] = temp;
 }
}
int main()
{
 FILE *fptr;
 char str[100];
 if((fptr=fopen("1.txt","r"))==NULL)
 printf("Error in opening the file");
 else
 printf("File open successful");
 while(fscanf(fptr,"%s",str)!= EOF)
 {
 reverseString(str);
 printf("\n%s",str);
 }
 fclose(fptr);
}
