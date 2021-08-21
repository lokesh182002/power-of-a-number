#include<stdio.h>
void main()
{
	int m,n,p,i;
	printf("\n the product of numbers m power n are:");
	scanf("%d%d",&m,&n);
	p=1;
	for(i=1;i<=n;i++)
	{
		p=p*m;
	}
	printf("\n product=%d",p);
}
