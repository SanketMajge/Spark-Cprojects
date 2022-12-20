#include<stdio.h>
//without return type with parameter
void add(int a,int b);
main()
{
	int a,b;
	printf("\n enter a and b=");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("\n add=%d",c);
}
