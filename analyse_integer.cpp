#include <stdio.h>
int main()
{
	int i=0,j=0,temp;
	int min,max,count;
	int arr[20];
	int num;
	scanf("%d",&num);
	while(num!=0)
	{
		arr[i]=num%10;
		num/=10;
		i++;
	}
	count=i;
	
	max=arr[0];
	for(i=0;i<count;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}	
	}
	min=arr[0];
	for(j=0;j<count;j++)
	{
		if(arr[j]<min)
		{
			min=arr[j];
		}
	}
	printf("%d %d %d",count,max,min);
	return 0;
} 
