#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void* a,const void* b)
{
	return (*(int*)b- *(int*)a);
}
/*
a-b is from small to big
b-a is from big to small
*/  
int main()
{
	int value[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&value[i]);
	qsort(value,10,sizeof(int),cmpfunc);
	for(i=0;i<10;i++)
		printf("%d\t",value[i]);
	return 0;
}
