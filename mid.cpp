#include <cstdio> 
#include <cstdlib>
using namespace std;
int main()
{
	long long ca, cb;
	char*a, *b;
	int na, nb;
	scanf("%d %d", &na, &nb);
	a =(char*)malloc(sizeof(char)*(na+1));
	b =(char*)malloc(sizeof(char)*(nb+1));
	scanf("%s", a);
	scanf("%s", b);
	ca = atoi(a);
	cb = atoi(b);
	printf("%ld", ca + cb);
	free(a);
	free(b);
	return 0;
}