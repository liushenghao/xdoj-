#include <cstdio>
#include <string>
using namespace std;
int main()
{
	char * find;
	char code[50];
	unsigned int i;
	int score, isempty = 0, length = 0, typeNUM = 0, typeMAX = 0, typeMIN = 0, typeOTH = 0;
	fgets(code, 50, stdin);
	find = strchr(code, '\n');
	if (find)
		*find = '\0';
	for (i = 0; i < strlen(code); i++)
	{
		if (code[i] != 0)
			isempty = 1;
		if (strlen(code) > 8)
			length = 1;
		if (code[i] >= '0'&&code[i] <= '9')
			typeNUM = 1;
		else if (code[i] >= 'A'&&code[i] <= 'Z')
			typeMAX = 1;
		else if (code[i] >= 'a'&&code[i] <= 'z')
			typeMIN = 1;
		else
			typeOTH = 1;
	}
	score = typeNUM + typeMAX + typeMIN + typeOTH - 1;
	if (isempty)
		printf("%d", score + isempty + length);
	else
		printf("0");
	return 0;
}