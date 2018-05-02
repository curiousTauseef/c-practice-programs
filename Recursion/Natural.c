#include<stdio.h>
void natural(int n)
{
if(n>1)
{
printf("%d\n",n);
return natural(n-1);
}
else
{
printf("1");
}
}
int main()
{
int n,ans;
scanf("%d",&n);
natural(n);
return 0;
}
