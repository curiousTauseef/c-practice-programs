#include<stdio.h>
int main()
{
char c[100],alpha;
int count[27]={0};
int i,j,k=0,l;
gets(c);
printf("\n");
for(i=0;c[i];i++);
for(alpha='a' ;alpha<='z';alpha++)
{
for(j=0;j<i;j++)
{
if(c[j]==alpha)
{
count[k]++;
}
}
k++;
}
for(l=0;l<26;l++)
{
printf("%c = %d \n",l+97,count[l]);
}
return 0;
}
