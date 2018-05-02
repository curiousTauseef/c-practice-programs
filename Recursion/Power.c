#include<stdio.h>
int power(int x,int n)
{
if(n==0)
{
return 1;
}
else
{
return x*power(x,n-1);
}
}
int main()
{
int x,n,res;
scanf("%d",&x);
scanf("%d",&n);
res=power(x,n);
printf("finding %d to the power of %d",x,n);
printf("Power : %d \n",res);
}
