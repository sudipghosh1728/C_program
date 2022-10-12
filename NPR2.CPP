#include<stdio.h>
#include<conio.h>
int fact (int x);
void main()
{
int n,r;
float npr;
printf("Enter the value ofn&r:\n");
scanf("%d%d",&n,&r);
npr=(float)fact(n)/fact(n-r);
printf("%f",npr);
getch();
}
int fact(int x)
{
int f=1,i;
for(i=x;i>0;i--)
    f=f*i;
return(f);
}

