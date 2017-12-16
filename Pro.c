#include<stdio.h>
void A(int n)
{
	double l=1189,b=841,ans,p=1;
	if(n==0){
	  printf("%lf mm X %lf mm",l,b);
		}
	else
		{
	while(n--){
	  p=p*2;
		  }

	printf("%lf mm X %lf mm",1189.0/p,841.00);

		}
}
int main()
{
int n;
printf("Enter Value of n \n");
scanf("%d",&n);
A(n);
return 0;
}
