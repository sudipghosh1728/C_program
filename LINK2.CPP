#include<stdio.h>
#include<conio.h>
#define SIZE 100
int top=-1;
char stack[SIZE];
void push(char item);
char pop();
int is_operator(char symbol);
int precedence(char symbol);
void main()
{
int i;
int j;
char infix_exp[SIZE],postfix_exp[SIZE];
char item;
char x;
clrscr();
printf("\nEnter Infix epression in parentheses: \n");
gets(infix_exp);
i=0;
j=0;
item=infix_exp[i++];
while(item!='\0')
{
if(item=='(')
{
push(item);
}
else if((item>='A'&& item<='Z')||
(item>='a'&& item<='z'))
{
postfix_exp[j++]=item;
}
else if(is_operator(item)==1)
{
x=pop();
while(is_operator(x)==1 && precedence(x)>=precedence(item))
{
postfix_exp[j++]=x;
x=pop();
}
push(x);
push(item);
}
else if(item==')')
{
x=pop();
while(x!='(')
{
postfix_exp[j++]=x;
x=pop();
}
}
else
{
printf("\nInvaid Arithmatic Expression.\n");
getch();
exit(0);
}
item= infix_exp[i++];
}
postfix_exp[j++]='\0';
printf("\nArithmatic exdpression in Postfix notation:");
puts(postfix_exp);
getch();
}
void push(char item)
{
if(top>=SIZE-1)
{
printf("\nStack Overflow. Push not possible.\n");
}
else
{
top=top+1;
stack[top]=item;
}
}
