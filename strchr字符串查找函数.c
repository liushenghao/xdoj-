#include <stdio.h>
#include <stdlib.h>//����system("pause") 
#include <string.h>
int main()
{
    char *s = "0123456789012345678901234567890";
    char *p;
    p = strchr(s, '5');
//    strchr() ��������ĳ�ַ����ַ������״γ��ֵ�λ�ã���ԭ��Ϊ��
//    char * strchr (const char *str, int c);
//	��������str ΪҪ���ҵ��ַ�����c ΪҪ���ҵ��ַ���
//	strchr() �����ҳ� str �ַ����е�һ�γ��ֵ��ַ� c �ĵ�ַ��Ȼ�󽫸õ�ַ���ء� 
	printf("%ld\n", s);
    printf("%ld\n", p);
	system("pause");
    return 0;
}
