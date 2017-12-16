//count characters in a string
//example programe
#include<stdio.h>
#include<string.h>
int main()
{
int c,nl=0;
while((c=getchar())!=EOF)
  {
    ++nl;
  }
  printf("%d\n",nl);
return 0;
}
