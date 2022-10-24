#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { 	
	element data;
	struct ListNode *link;
} ListNode;

ListNode* insert_first(ListNode *head, int value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	
	p->data = value;
	p->link=head;
	head=p;
	return head;
}

// ��� pre �ڿ� ���ο� ��� ����
ListNode* insert(ListNode *head, ListNode *pre, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	
	//		
	//		
	//			
	return head;			
}

ListNode* erase_first(ListNode *head)
{
	ListNode *removed;
	if(!head)return NULL;
	removed=head;
	head=head->link;
	free(removed);
	return head;
}
// pre�� ����Ű�� ����� ���� ��带 �����Ѵ�. 
ListNode* erase(ListNode *head, ListNode *pre)
{
	ListNode *removed;
	//
	//	
	free(removed);			
	return head;			
}

void print_list(ListNode *head)
{
	ListNode *p;
	for (p=head;p;p=p->link)printf("%d->", p->data);
	printf("NULL \n");
}


int main(void)
{
	ListNode *head = NULL;
	int i;
	for (i = 0; i < 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
	for (i = 0; i < 5; i++) {
		head = erase_first(head);
		print_list(head);
	}
	return 0;
}
