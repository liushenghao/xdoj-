#include<cstdio>
using namespace std
int flower(int num);
int main()
{
	int group,i,empty,j;
	int a[100];
	int b[100];
	scanf("%d",&group);
	for(i=0;i<group;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(b[i]<a[i])
		{
			t=a[i];
			a[i]=b[i];
			b[i]=t;
		}
	}
	
	for(i=0;i<group;i++)
	{
		for(j=a[i];j<=b[i];j++)
		{
			if(flower(b))
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

int flower(int num)
{
	int level,t;
	int a[10];
	t1=num;
	while(t>0)
	{
		t/=10;
		level++;
	}
	for
}
