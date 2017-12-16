#include<stdio.h>
int power(int x,int j)
{
if(j!=0)
{
return x*power(x,j-1);
}
else
{
return 1;
}
}

int main()
{
int x,j;
scanf("%d",&x);
j=power(x,x);
printf("%d",x);
}
