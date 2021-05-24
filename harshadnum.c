#include<stdio.h>
void nums(int num)
{
	int r=0,n,c=0;
	n=num;
	while(n)
	{
		r=n%10;
		n=n/10;
		c=c+r;
	}
	if(num%c==0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	nums(num);
	return 0;
}
