#include<stdio.h>
main()
{
	long long a[10] , n,s,j,i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		printf("1\n");
		else
		{
		s=1+a[i];
		for(j=2;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			s+=j;
		}
		printf("%lld\n",s);
	    }
	}
}