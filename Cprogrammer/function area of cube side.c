#include<stdio.h>
//without return type without parameter
void cube();
void fact();
main()
{
	cube();
	fact();
}
void cube()
{
	int side,area;
	printf("\n enter sides= ");
	scanf("%d",side);
	area=6*side*side;
	printf("\n area of cube=%d",area);
}
void fact()
{
	int i,f=1,n;
	printf("\n enter n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\n factorial=%d",f);
	
	}

