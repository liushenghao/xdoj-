#include <stdio.h>
int gcd(int a,int b);

int main()
{
	int t;
	int i=0;
	int j=0;
	int arr[100];
	int a,b;
	scanf("%d %d",&a,&b);
	while (a!=0||b!=0)
	{
		if(a==0||b==0)
		{
			if(b>a)
			{
				t=a;
				a=b;
				b=t;
			}
			arr[i]=a;
			i++;
			scanf("%d %d",&a,&b);	
		}else{
			arr[i]=gcd(a,b);
			i++;
			scanf("%d %d",&a,&b);
		}
	}
	for(;j<i;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
} 

int gcd(int a,int b)
{
	int t;
	if(b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	while((a-b)!=0)
	{
		t=a-b;
		a=b;
		b=t;
	}
	return a;
}
