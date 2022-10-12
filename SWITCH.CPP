#include<stdio.h>
#include<conio.h>
void main()
{
int pr;
printf("enter the value of pr :\n");
scanf("%d",& pr);
switch (pr);
{
if(pr>90)
printf("E");
else if(pr>80)
printf("O");
else if(pr>70)
printf("VG");
else if(pr>60)
printf("G");
else if(pr>50)
printf("S");
else if(pr>40)
printf("P");
else(pr<40)
printf("F");
}
getch();
}