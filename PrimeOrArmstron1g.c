#include<stdio.h>
//If a number is prime print it's multiplication table, else if a number is armstrong number print it's square value.
int primecheck(int n)
{
int i,count=0;
  for(i=2;i<n;i++)
    {
     if(n%i==0)
       {
       count++;
       }
    }
  if(count==0)
    {
    return 1;
    }
  else
    {
    return 0;
    }
}

int armstrongcheck(int num)
{
int r,s=0;
  while(num)
    {
    r=num%10;
    s+=r*r*r;
    num=num/10;
    }
  if(s==num)
    return 1;
  else
    return 0;
}

void multiplication(int number)
{
  int i;
  for(i=1;i<=10;i++)
    {
    printf("  %d\n  ",number*i);
    }
}

int main()
{
int n;
  printf("give an input");
  scanf("%d",&n);
  if(primecheck(n)==1)
     multiplication(n);
  else if(armstrongcheck(n)==1)
     printf("%d\n",n*n);
return 0;
}
