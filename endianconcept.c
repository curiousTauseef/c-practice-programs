#include<stdio.h>


int main()
{
union n
{
int i;
char ch[2];
};

union n key;
key.i=512;
printf("key.i = %d\n",key.i);
printf("key.ch[0] = %d\n",key.ch[0]);
printf("key.ch[1] = %d\n",key.ch[1]);



}
