#include<cstdio>
#include<cstdlib>
using namespace std;
double fun(int num)
{
	int i;
	
	return num;
}
int main()
{
	int m,i;
	scanf("%d",&m);
	int *a=(int*)malloc(m*sizeof(int));
	double *b=(double*)malloc(m*sizeof(double));
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=fun(a[i]);
		printf("%.6lf",b[i]);
	} 
	free(a);
	free(b);
	return 0;
} 
