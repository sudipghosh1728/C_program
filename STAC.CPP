#include<stdio.h>
int size=50;
int stack[50];
int top=-1;
int isempty()
{
	if(top==-1)
	  return 1;
	else
	  return 0;
}
int isfilled()
{
	if(top == size)
	  return 1;
	else
	  return 0;
}
int push(int data)
{
	if(!isfilled())
	{
	  top = top+1;
	  stack[top] = data;
	}
	else
	{
	  printf("stack is filled \n");
	}
	return 0;
}
int pop()
{
	int data;
	if(!isempty())
	{
	 data = stack[top];
	 top = top - 1;
	 return data;
	}
	else
	{
	 printf("stack is empty \n");
	}
	return 0;
}
int peek()
{
	return stack[top];
}
int main()
{
	push(2);
	push(45);
	push(9);
	push(4);
	push(11);
	printf("the top element is %d",peek());
	while(!isempty())
	{
	 int data = pop();
	 printf("%d \n",data);
	 return 0;
	}
}
//sp->top=-1;
//sp->arr=(int*)malloc(sp->size*sizeof(int));
//int x;
//push(sp,56);
//push(sp,62);
//push(sp,71);
//push(sp,13);
//push(sp,18);
//pop(sp);
//pop(sp);
//x=peek(sp,1);
//printf("the peek value is %d \n",x);
//for(int i=0;i<4;i++){
//	printf("%d",sp->arr[i]);
//}
//return 0;
//}


