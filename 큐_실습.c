#include <stdio.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct { 				// 큐 타입
	//
	//
	//
} QueueType;

// 큐 초기화
void init_queue(QueueType *q)
{
	//
	//
}

// 큐 출력 
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
// 큐 삽입 
void enqueue(QueueType *q, int item)
{
	//~
}
// 큐 삭제 
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

