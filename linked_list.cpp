#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node* next;
}Node; 
/*�����������ÿһ���ڵ���ʽ*/
typedef struct _list{
	Node *head;
}List;
/*��������Ա�ʾ����������*/ 

void add(List* plist,int number)
{
	//add to linked list
	Node* p=(Node*)malloc(sizeof(Node));
	p->value=number;
	p->next=NULL;
	//find the last
	Node *last = plist->head;
	if(last){
		while(last->next){
			last=last->next;
		}
		last->next=p;
	}else{
		plist->head=p;
	}
}
/*��ӵ�����Ľڵ�*/
void print(List *plist)
{
	Node* p;
	for(p=plist->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}
/*�������������������*/
int find(List *plist,int num)
{
	int isfound =0;
	Node* p;
	for(p=plist->head;p;p=p->next){
		if(p->value==num){
			isfound=1;
			break;
		}
	}
	return isfound;
}
/*�ڵ������б���Ѱ��num�������
����ҵ��������棻
���򣬷��ؼ�*/
void delone(List *plist,int num)
{
	Node* p;
	Node* q;
	for(q=NULL,p=plist->head;p;q=p,p=p->next)
	{
		
		if(find(plist,num)){
			if(q){
				q->next =p->next;
			}else{
				plist->head =p->next;
			}
			free(p);
			break;
		}
	}
}
/*ʵ�ֵ�����ָ��λ�õ�ɾ��
��������д�Ĳ�����qwq�������ֻ�̶ܹ�ɾ����һλ
�������ٵ��Կ���*/ 
void clean(List *plist)
{
	Node* p;
	Node* q;
	for(p=plist->head;p;p=q){
		q=p->next;
		free(p);
	}
}
/*����ʵ�ֵ������ȫ�����*/
int main()
{
	Node* head=NULL;/*��ʼ������ͷ*/ 
	List list;/*��ʼ��list�ṹ��Ϊ��������*/
	int number;/*��ʱ�������������*/
	list.head=NULL;
	do{
		scanf("%d",&number);
		if(number!=-1){
			add(&list,number);
		}
	}while(number!=-1);
	/*��������*/
	print(&list);
	/*ʹ��print������ӡ����*/
	do{
		scanf("%d",&number);
		if(number!=-1){
			delone(&list,number);
		}
	}while(number!=-1);
	/*������Ҫʵ������Ĺ̶�λ��ɾ��*/
	print(&list);
	
	clean(&list);
	/*������������������ڴ�*/
	return 0;
} 
