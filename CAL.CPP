#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	char ch;
	clrscr();
	printf("enter first number");
	scanf("%f",&a);
	printf("enter user choice to perform operation");
	scanf(" %c",&ch);
	printf("enter second number");
	scanf("%f",&b);
	switch(ch)
	{
		case'+' :c=a+b;
			printf("output=%f",c);
			break;
		case'-' :c=a-b;
			printf("output=%f",c);
			break;
		case'*' :c=a*b;
			printf("output=%f",c);
			break;
		case'/' :c=a/b;
			printf("output=%f",c);
			break;
		default :printf("Invalid operation");
			break;
		}
		getch();
}