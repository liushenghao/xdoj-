/*
��������ʼ��һ���������������Ԫ�� 
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node *next;
}Node; 

int main()
{
	Node *head =NULL;//һ��ʼ���������ǿյ� 
	int number;
	do {
		scanf("%d",&number);
		if(number!=-1){         //����Ҫ��������ּ��뵽link-list 
			Node *p = (Node*)malloc(sizeof(Node));//����Ŀռ���������ô�� 
			p->value =number;
			p->next =NULL;      //��ô�ҵ���һ���ĵ�ַ���Զ����䣿 
			                    //��ʼ������һ����ַ��ֵΪNULL? 
			//�ҵ����һ��
			//���ұ���
			Node *last =head;
			if(last){
				while(last->next){
					last=last->next; 
				}
				last->next=p;
			}else{
				head = p;
			}
		} 
	}while(number!=-1);
	return 0;
} 
