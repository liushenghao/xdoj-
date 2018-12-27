#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int i,j,num,notFind=1;
	char * s1=(char*)calloc(27,sizeof(char));
	char * s2=(char*)calloc(256,sizeof(char));
	char * s3=(char*)calloc(27,sizeof(char));
	fgets(s1,27,stdin);
	fgets(s2,257,stdin);
	for(i=0;i<256;i++)
	{
		for(j=0;j<26;j++)
		{
			if(s2[i]==0)
				goto here;
			else if(s2[i]==32)
				break;
			else if(s2[i]==s1[j])
			{
				num = s2[i]-97;
				s3[num]+=1;
				break;
			}
		}
	}
	
	here:
		
	for(j=0;j<27;j++)
	{
		if(s3[j]>0)
			s3[j]=j+97;
	}
	
	for(j=0;j<27;j++)
	{
		if(s3[j]>0)
			notFind =0;
	}
	if(notFind)
		printf("No");
	else{
		for(j=0;j<27;j++)
		{
			if(s3[j]>0)
				printf("%c ",s3[j]);
		}
	}
	free(s1);
	free(s2);
	free(s3);
	return 0;
}
