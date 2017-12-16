//example program
#include<stdio.h>
#include<string.h>
int main()
{
int c,nl=0;
while((c=getchar())!=EOF)
  {
  if(c=='\n')
  ++nl;
  }
  printf("%d",nl);
return 0;
}
