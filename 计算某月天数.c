#include <stdio.h>
int main()
{
	int month;
	int year;
	scanf("%d%d",&year,&month);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		if(month==2)
		{
			printf("29");
		}
		else if(month==4||month==6||month==9||month==11)
		{
			printf("30");
		}
		else
		{
			printf("31");
		}
	}
	else
	{
		if(month==2)
		{
			printf("28");
		}
		else if(month==4||month==6||month==9||month==11)
		{
			printf("30");
		}
		else
		{
			printf("31");
		}
	}
	return 0;	
}

