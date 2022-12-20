#include<stdio.h>
//with return type with parameter
int fact(int n);
main()

{
	int n,ans;
	printf("\n enter n=");
	scanf("%d",&n);
ans=     fact(n);
printf("\n factorial =%d",ans);

}
int fact(int n)
{
	int f;
	if(n==1)
	return 1;
	else
	f=n*fact(n-1);
	
	return f;
}
