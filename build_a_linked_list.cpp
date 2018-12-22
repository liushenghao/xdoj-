/*
构建，初始化一个链表和他的所有元素 
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node *next;
}Node; 

int main()
{
	Node *head =NULL;//一开始整个链表都是空的 
	int number;
	do {
		scanf("%d",&number);
		if(number!=-1){         //这里要把这个数字加入到link-list 
			Node *p = (Node*)malloc(sizeof(Node));//分配的空间是连续的么？ 
			p->value =number;
			p->next =NULL;      //怎么找到下一个的地址？自动分配？ 
			                    //初始化了下一个地址初值为NULL? 
			//找的最后一个
			//并且遍历
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
