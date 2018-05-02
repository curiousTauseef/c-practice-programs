#include<stdio.h>
void printnumber(int range)
{
if(range==0)
return;
printnumber(range-1);
printf("%d\n",range);
}
int main()
{
int range=5;
printnumber(5);
return 0;
}
