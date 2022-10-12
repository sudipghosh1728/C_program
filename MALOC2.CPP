#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	int*a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		a[i]=i*2;
	}
	for(int j=0;j<n;j++){
		printf("%d",a[j]);
	}
	return 0;
}