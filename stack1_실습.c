#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100	
typedef int element;		
element  stack[MAX_STACK_SIZE]; 
int  top = -1;			

int is_empty()
{
	//
}

int is_full()
{
	//
}

void push(element item)
{
	if (is_full()) {
		//
		//
	}
	else stack[++top] = item;
}

element pop()
{
	if (is_empty()) {
		//
	}
	//else
}

element peek()
{
	if (is_empty()) {
		//
	}
	//else
}

int main(void)
{
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	return 0;
}
