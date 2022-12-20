#include<stdio.h>
int cube(int side);
int fact(int n);
main()
{
	int side,ans,n,ans1;
	printf("/n enter side=");
	scanf("%d",&side);
	ans=cube(side);
	printf("\n area of cube=%d",ans);
	printf("\n enter n= ");
	scanf("%d",&n);
	ans1= fact(n);
	printf("\n factorial =%d,ans1");
	
}
int cube(int side)
{
	int area;
	area=6*side*side;
	return area;
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
