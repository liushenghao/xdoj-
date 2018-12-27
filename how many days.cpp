#include<stdio.h>
typedef struct{
	int year;
	int month;
	int day;
}date;

int main()
{
	int sum=0,i;
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	date today;
	scanf("%d%d%d",&today.year,&today.month,&today.day);
	if (today.year%400==0 || (today.year%4==0 && today.year%100!=0))
    {
        for(i=1;i<today.month;i++)
        {
        	sum+=month2[i-1];
        }
        sum+=today.day;
    }else{
    	for(i=1;i<today.month;i++)
        {
        	sum+=month1[i-1];
        }
        sum+=today.day;
    }
    printf("%d",sum);
    return 0;
}
