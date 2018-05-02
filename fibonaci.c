#include<stdio.h>
int fibonacisequence(int n)
{
if(n==1)
return 0;
else if(n==2)
return 1;
else
return fibonacisequence(n-1)+fibonacisequence(n-2);
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",fibonacisequence(n));
return 0;
}

