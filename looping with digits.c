#include<stdio.h>
void main()
{
	int n,r,edc=0,odc=0,zeroc=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
	{
		zeroc++;
	}
	else if(r%2==0)
	{
		edc++;
	}
	else
	{
		odc++;
	}
	printf("%d %d %d",edc,odc,zeroc);

}
}
