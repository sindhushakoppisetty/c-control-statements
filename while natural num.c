#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter a num");
	scanf("%d",&n);//5
	while(i<=n)//1<=5
	{
		sum=sum+i;//sum=1
		i++;
	}
	printf("%d", sum);
}
