#include<stdio.h>
#include<string.h>
int main()
{
int l1,l2,i,j;
char a[100],b[100],c[200];
gets(a);
gets(b);

for ( l1=0 ; a[l1] ; l1++);
printf("%d\n",l1);

for ( l2=0 ; b[l2] ; l2++);
printf("%d",l2);
for ( i=0  ; i<l1  ; i++)
{
c[i]=a[i];
}
c[l1]=32;
for (j= 0;j<l2 ;j++)
{
c[l1+j+1] = b[j];
}
puts(c);
return 0;

}

/*char a[100],b[100],c[200];
gets(a);
gets(b);
//strcat(a," ");
strcat(a,b);
puts(a);
return 0;*/



