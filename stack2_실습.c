#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;


void init_stack(StackType *s)
{
	s->top = -1;
}


int is_empty(StackType *s)
{
	if(s->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int is_full(StackType *s)
{
	if(s->top == (MAX_STACK_SIZE-1)){
		return 1;
	}
	else{
		return 0;
	}
}

void push(StackType *s,element value)
{
	if (is_full(s)) {
		
		printf("스택 포화 에러\n");
		return;
	}
	else{
		s->data[++(s->top)] = value;
	}
	
	
}

element pop(StackType *s)
{
	if (is_empty(s)) {
		printf("스택 공백 에러\n");
		exit(1);
	}
	else{
		return s->data[(s->top)--];
	}
	
}

element peek(StackType *s)
{
	if (is_empty(s)) {
		printf("스택 공백 에러\n");
		exit(1); 
	}
	//else
}

int main(void)
{
	StackType s;

	init_stack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}
