#include<stdio.h>
int main()
{
int i,j,n;
printf("enter dimension \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j>=2 && j<=n-1 && i!=1 && i!=n)
printf("  ");
else
printf("* ");

}
printf("\n");
}
return 0;
}
