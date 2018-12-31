#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node* next;
}Node; 
/*建立单链表的每一个节点形式*/
typedef struct _list{
	Node *head;
}List;
/*用这个可以表示整个单链表*/ 

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
/*添加单链表的节点*/
void print(List *plist)
{
	Node* p;
	for(p=plist->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}
/*遍历并输出整个单链表*/
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
/*在单链表中遍历寻找num这个数字
如果找到，返回真；
否则，返回假*/
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
/*实现单链表指定位置的删除
！！！！写的不完善qwq现在这个只能固定删除第一位
我晚上再调试看看*/ 
void clean(List *plist)
{
	Node* p;
	Node* q;
	for(p=plist->head;p;p=q){
		q=p->next;
		free(p);
	}
}
/*遍历实现单链表的全部清除*/
int main()
{
	Node* head=NULL;/*初始化链表头*/ 
	List list;/*初始化list结构作为链表整体*/
	int number;/*临时保存输入的数字*/
	list.head=NULL;
	do{
		scanf("%d",&number);
		if(number!=-1){
			add(&list,number);
		}
	}while(number!=-1);
	/*输入链表*/
	print(&list);
	/*使用print函数打印链表*/
	do{
		scanf("%d",&number);
		if(number!=-1){
			delone(&list,number);
		}
	}while(number!=-1);
	/*本来想要实现链表的固定位置删除*/
	print(&list);
	
	clean(&list);
	/*结束，回收链表，清除内存*/
	return 0;
} 
