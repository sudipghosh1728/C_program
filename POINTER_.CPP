#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char str[]="Hello Guru99!";
char *p;
p=str;
printf("First character is:%c\n",*p);
p=p+1;
printf("Next character is:%c\n",*p);
printf("Printing all the characters in a string\n");
p=str;// reset the pointer
for(int i=0;i<strlen(str);i++)
{
printf("%c\n",*p);
p++;
}
getch();
return 0;
}