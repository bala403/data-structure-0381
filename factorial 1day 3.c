#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("enter the numbers:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is:%d",num,fact);
	return 0;
}
