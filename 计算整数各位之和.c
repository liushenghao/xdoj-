#include <stdio.h>
int main()
{
	int num;
	int sum=0;
	scanf("%d",&num);
	while(num/10!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	} 
	sum=sum+num;
	
	printf("%d\n",sum);
	return 0;	
}

