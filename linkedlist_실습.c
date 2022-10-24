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
	p->link = head;
	head= p;
	return head;
}

ListNode*  insert(ListNode *head, ListNode *pre, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	
	p->link = pre->link;
	p->data = value;
	pre->link = p;
	return head;			
}

ListNode* erase_first(ListNode *head)
{
	ListNode *removed;
	if (head == NULL) return NULL;
	removed = head;
	head = removed->link;
	free(removed);		
	return head;		
}
ListNode* erase(ListNode *head, ListNode *pre)
{
	ListNode *removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);			
	return head;			
}

void print_list(ListNode *head)
{
	ListNode *p;
	for (p = head;p!=NULL;p = p->link)
		printf("%d->", p->data);
	printf("NULL \n");
}

int main(void)
{
	ListNode *head = NULL;
	int i;
	for (i = 0; i < 10; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
	
	for (i = 0; i < 10; i++) {
		head = erase_first(head);
		print_list(head);
	}
	return 0;
}
