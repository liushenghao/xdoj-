#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;

	char str[10][10];
	for(i=0;i<10;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10-i-1;j++)
		{
			if(strcmp(str[j],str[j+1])>0){
				char arr[10];
				strcpy(arr,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],arr);
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
