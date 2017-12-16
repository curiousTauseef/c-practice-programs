#include<stdio.h>
void isPrime(int n)
{
int i,count=0;
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0 && n!=1 )
{
printf("%d\n",n);
}
}

int main()
{
int a,b,i;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
isPrime(i);
}
return 0;
}
