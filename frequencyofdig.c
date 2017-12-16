#include<stdio.h>
int length(long long n)
{
 int count=0;
  while(n)
   {
    count++;
    n=n/10;
   }
return count;
}
int main()
{
long long n,r;
int i;
scanf("%d",&n);
int arr[10]={0};
while(n>0)
{
r=n%10;
arr[r]++;
n=n/10;
}
for(i=0;i<10;i++)
{
printf("%d : %d\n",i,arr[i]);
}
return 0;
}

