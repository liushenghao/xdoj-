#include <stdio.h>
#define length 15
int main()
{
	int i=0;
	int j;
	int arr[length]={2,3,6,4,8,5,9,};
	int p;
	for(i=1;i<length;i++)
	{
		int temp1=arr[i];
		int position =i;
		for (j=i-1;j>=0;j--)
		{
			if(temp1<arr[j])
			{
				arr[j+1]=arr[j];
				position-=1;
			}else{
				break;
			}
		}
		arr[position]=temp1;
	}
	for(i=0;i<length;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
} 
