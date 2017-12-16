#include<stdio.h>
int main()
{
 char str[100];
int j,i,count1=0,count2=0,count3=0,count4=0;
printf("enter a string\n");
gets(str);
for(i=0;str[i];i++);
for(j=0;j<i;j++)
{
if(str[j]>='A'&& str[j]<='Z')
{
count1++;
}
else if(str[j]>='a' && str[j]<='z')
{
count2++;
}
else if(str[j]>='0' && str[j]<='9')
{
count3++;
}
else
{
count4++;
}
}
printf(" length of Captialized Characters : %d\n",count1);
printf(" length of Lower Case Characters : %d\n",count2);
printf(" length of digits : %d\n",count3);
printf(" length of Special Characters %d",count4);
return 0;
}
