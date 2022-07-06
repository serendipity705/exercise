#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
	struct _node *Previous;
} Node;

typedef struct _list {
	Node *head;
	Node *tail;
} List;

void add ( List* list, int number );
void print( List* pList );

int main(int argc, char** argv) {
	List list;
	int number;
	list.head = NULL;
	do {
		scanf("%d", &number);
		if ( number != -1 ) {
			add( &list, number );
		}
	} while ( number != -1 );

	print( &list );
	//	清除链表
	Node *p,*q;
	for ( p=list.head; p; p=q, q=p->next ) {
		free(p);
	} 
	return 0;
}
//	将输入的数储存在链表中
void add ( List* pList, int number ) {
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	p->Previous = NULL;
	Node *last = pList->head;
	if ( last ) {
		while (  last->next ) {
			last = last->next;
		}
		last->next = p;
		pList->tail = p;
		p->Previous = last;
	} else {
		pList->head = p;
	}
}
//	输出
void print( List* pList ) {
	Node *p;
	for ( p = pList->tail; p ; p = p->Previous ) {
		printf( "%d ", p->value );
	}
	printf("\n");
}