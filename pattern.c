#include<stdio.h>
int main()
{
int n,i,j,space;
scanf("%d",&n);
for(i=0;i<=n;i++)
	{
	for(space=1;space<=n-i;space++)
		{
			printf(" ");
		}
	for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
	for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
return 0;
}
