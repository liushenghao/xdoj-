#include<cstdio>
#include<cstdlib>
using namespace std;
typedef struct{
	int id;
	float averange;
	char name[15];
	int grade[3];
}student;
int main()
{
	int n,i,;
	scanf("%d",&n);
	student students[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&students[i].id);
		scanf("%s",students[i].name);
		scanf("%d %d %d",&students[i].grade[0],&students[i].grade[1],&students[i].grade[2]);
	}
	
	for(i=0;i<n;i++)
	{
		students[i].averange=(stdents[i].grade[0]+stdents[i].grade[1]stdents[i].grade[2])/3.0
	}
	
	
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",students[i].id);
//		printf("%s\t",students[i].name);
//		printf("%.f\n",averange[i]);
//	}
	return 0;
} 
