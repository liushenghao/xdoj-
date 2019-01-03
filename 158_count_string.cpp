#include <cstdio>
#include <string>
using namespace std;
void count(int place,int *num);
int main()
{
	char str[101];
	int num[5];
	char *find;
	int i;
	
	fgets(str,100,stdin);
	find=strchr(str,'\n');
	if(find)
		*find='\0';
	for(i=0;i<5;i++)
		num[i]=0;
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
			count(0,num);
		else if(str[i]>='a'&&str[i]<='z')
			count(1,num);
		else if(str[i]==' ')
			count(2,num);
		else if(str[i]>='0'&&str[i]<='9')
			count(3,num);
		else
			count(4,num);
		i++;
	}
	for(i=0;i<5;i++)
		printf("%d ",num[i]);
	return 0;
}
void count(int place,int* num)
{
	num[place]++;	
} 
