#include<stdio.h>
#include<conio.h>
main()
{
float x[100], a[100][100],tmp;
int n,l=0,f=0;
printf("Nhap vao so an cua he: ");
scanf("%d",&n);
int m=n+1;
printf("\n\nNhap vao he so cua he: \n");
for(int i=1;i<=n;i++)
{
 	for(int j=1;j<=m;j++)
    scanf("%f",&a[i][j]);
    printf("\n");
}
for(int i=1;i<=n;i++)
{
	for(int j=i+1;j<=m;j++)
		if(a[i][i]==0)
		{
			for(int g=1;g<=n;g++)
			{
		 		tmp=a[i][g];
		 		a[i][g]=a[j][g];
		 		a[j][g]=tmp;
			}
		}
	if(a[i][i]==0) 
		{
			printf("Khong giai duoc he!");
			break;
		}
	else if (a[i][i]!=0)
	{
		for(int j=i+1;j<=n;j++)
		{
			float t=a[j][i]/(float)a[i][i];
			for(int k=1;k<=m;k++)
				a[j][k]=a[i][k]*t-a[j][k];
		}
		f++;
	}
}
		if (f=n-1)
		{
			l=1;
			x[n]=a[n][m]/(float)(a[n][n]);
			for(int i1=n-1;i1>=1;i1--)
    		{
    			float h=a[i1][m];
    			for(int j1=m-1;j1>=i1;j1--)
    			h=h-a[i1][j1]*x[j1];
    			x[i1]=h/(float)a[i1][i1];	
			}
		}
if(l==1)
{
	printf("\n nghiem cua he la : ");
	for(int i=1;i<=n;i++)
	{
		printf("x[%d]=  ",i);
		printf("%.2f ",x[i]);
	}
}
}