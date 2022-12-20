#include<stdio.h>
//with return type with parameter
int add(int a,int b);
main()
{
	  int a,b,ans;
	  printf("/n enter a and b");
	  scanf("%d%d",&a,&b);
	  ans=add(a,b);
	  printf("/n add=%d",ans);
	  
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;

}
