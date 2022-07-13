#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
} Node;

typedef struct _list {
	Node *head;
} List;

void add ( List* list, int number );
void contrary( List* pList );
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
	
	contrary( &list );
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
	Node *last = pList->head;
	if ( last ) {
		while (  last->next ) {
			last = last->next;
		}
		last->next = p;
	} else {
		pList->head = p;
	}
}
//	用三个指针将链表逆序
void contrary( List* pList ){
	Node *p,*q,*r;
	p=pList->head;
	q=p->next;
	p->next=NULL;
	while(q!=NULL){
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	pList->head=p;
}
//	输出
void print( List* pList ) {
	Node *p;
	for ( p = pList->head; p ; p = p->next ) {
		printf( "%d", p->value );
	}
	printf("\n");
}