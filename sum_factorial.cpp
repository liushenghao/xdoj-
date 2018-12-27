#include<stdio.h>
int fac(int n);
int main()
{
	int n;
	long long int sum=0;
	scanf_s("%d", &n);
	for (int i = n; i > 0; i--)
		sum += fac(i);
	printf("%d %ld %ld", n, fac(n), sum);
	return 0;
}
int fac(int n)
{
	int tfac = 1;
	for (int i = n; i > 0; i--)
	{
		tfac *= i;
	}
	return tfac;
}