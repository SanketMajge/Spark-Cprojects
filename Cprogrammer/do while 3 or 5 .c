#include<stdio.h>
main()
{
	int i=1, n;
	printf("\n enter range=");
	scanf("%d",&n);
	do
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n no is divisible by 3 or 5 =%d",i);
		}
	i++;
}while(i<=n);
}
