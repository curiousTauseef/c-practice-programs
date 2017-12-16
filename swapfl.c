#include<stdio.h>
int length(int n)
{
  int count=0;
  while(n)
   {
    count++;
    n=n/10;
   }
return count;
}
int sumofdig(int n)
{
  int r,s=0;
  while(n)
   {
    r=n%10;
    s=s+r;
    n=n/10;
   }
return s;
}
int productofdig(int n)
{
int r,p=1;
  while(n)
  {
   r=n%10;
   p=p*r;
   n=n/10;
  }
return p;
}
int main()
{
  int n,i,num;
  scanf("%d",&n);
  num=n;
  int arrofdig[length(n)];
  for(i=0;i<length(n);i++)
  {
   arrofdig[i]=num%10;
   num=num/10;
  }
  for(i=0;i<length(n);i++)
  {
   printf("%d",arrofdig[i]);
  }
  printf("\n");
  printf("Sum of First and Last Digit : %d\n",arrofdig[0]+arrofdig[(length(n)-1)]);
  printf("Sum of Digits : %d\n",sumofdig(n));
  printf("Product of Digits : %d\n",productofdig(n));
  printf("Number of Digits : %d\n",length(n));
  return 0;
}
