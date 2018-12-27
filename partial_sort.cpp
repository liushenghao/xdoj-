#include<algorithm>
#include<cstdio>
using namespace std;
bool cmpfunc(int a,int b)
{
	return a>b;
}
int main()
{
	int a[100],num,last,i;
	scanf("%d %d",&num,&last);
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	sort(a,a+num,cmpfunc);
	if(num>last)
		for(i=0;i<last;i++)printf("%d ",a[i]);
	else
		for(i=0;i<num;i++)printf("%d ",a[i]);
	return 0;
} 
