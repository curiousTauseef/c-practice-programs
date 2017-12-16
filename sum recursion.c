#include<stdio.h>
int sum(int x)
{

if(x!=0)
{
return x+sum(x-1);
}
else
{
return x;
}

}
int main()
{
int x,j;
scanf("%d",&x);
j=sum(x);
printf("%d",j);
return 0;
}
