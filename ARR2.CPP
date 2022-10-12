#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],i,j,r,c;
clrscr();
printf("Enter how many row:\n");
scanf("%d",&r);
printf("Enter how many column:\n");
scanf("%d",&c);
printf("Insert the matrix:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
printf("The given matrix is=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
i=r/2;
printf("The middle row elements are:\n");
for(j=0;j<r;j++)
printf("%d\t",a[i][j]);
j=c/2;
printf("\nThe middle column elements are:\n");
for(i=0;i<c;i++)
printf("%d\t",a[i][j]);
getch();
}


