#include <stdio.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct { 				// ť Ÿ��
	//
	//
	//
} QueueType;

// ť �ʱ�ȭ
void init_queue(QueueType *q)
{
	//
	//
}

// ť ��� 
void queue_print(QueueType *q)
{
	//~
}

int is_full(QueueType *q)
{
	//~
}

int is_empty(QueueType *q)
{
	//~
}
// ť ���� 
void enqueue(QueueType *q, int item)
{
	//~
}
// ť ���� 
int dequeue(QueueType *q)
{
	//~
}
  
main(void)
{
	int item = 0;
	QueueType q;

	init_queue(&q);

	enqueue(&q, 10); queue_print(&q);
	enqueue(&q, 20); queue_print(&q);
	enqueue(&q, 30); queue_print(&q);

	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
}

