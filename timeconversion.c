#include<stdio.h>
int main()
{

int hh,mm,ss;
 
char time[11];

scanf("%s",time);

hh=(int)(time[0]-'0')*10+(int)(time[1]-'0');
mm=(int)(time[3]-'0')*10+(int)(time[4]-'0');
ss=(int)(time[6]-'0')*10+(int)(time[7]-'0');

if(hh<12 && time[8]=='P')
hh=hh+12;
if(hh==12 && time[8]=='A')
hh=0;
printf("%02d:%02d:%02d\n",hh,mm,ss);

}





