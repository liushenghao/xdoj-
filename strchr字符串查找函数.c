#include <stdio.h>
#include <stdlib.h>//包含system("pause") 
#include <string.h>
int main()
{
    char *s = "0123456789012345678901234567890";
    char *p;
    p = strchr(s, '5');
//    strchr() 用来查找某字符在字符串中首次出现的位置，其原型为：
//    char * strchr (const char *str, int c);
//	【参数】str 为要查找的字符串，c 为要查找的字符。
//	strchr() 将会找出 str 字符串中第一次出现的字符 c 的地址，然后将该地址返回。 
	printf("%ld\n", s);
    printf("%ld\n", p);
	system("pause");
    return 0;
}
