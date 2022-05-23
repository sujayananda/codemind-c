
#include<stdio.h>
int main()
{
	int n,i,s=0,p=1;
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
	  i=n%10;
	  n=n/10;
	
	  s=s+i;
	  p=p*i;
	}
	if(p==s)
	{
		printf("Spy Number");
	}
	else
	{
		printf("Not Spy Number");
	}
}