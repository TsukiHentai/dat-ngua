#include<stdio.h>
#include<malloc.h>
typedef int Data;
//------------------------------------//
typedef struct tagNode {
   	Data infor;
   	struct tagNode *link;
} Node;
//------------------------------------//
typedef struct tagList {
    Node *pHead;
    Node *pTail;
    int spt;
} List;
List L;
//------------------------------------//
void InitList(List *L) {
   	L->pHead = NULL;
   	L->pTail = NULL;
   	L->spt = 0;
}
//------------------------------------//
int emptyList(List L) {
    return (L.spt == 0); 
}
//------------------------------------//
void insert_Head(List *L, Data x) {
    Node *pp;
    pp = (Node*)malloc(sizeof(Node));
    pp->infor = x;
    pp->link = NULL;
    if(emptyList(*L)){
    	L->pHead = pp;
    	L->pTail = pp;
    }  	
	else {
    	pp->link = L->pHead;
    	L->pHead = pp;
    }
    L->spt++;
}
//------------------------------------//
void insert_Tail(List *L, Data x) {
    Node *pp;
    pp = (Node*) malloc(sizeof(Node));
    pp->infor = x;
    pp->link = NULL;
    if(emptyList(*L)) {
    	L->pHead = pp;
    	L->pTail = pp;
    }
	else {
    	L->pTail->link = pp;
    	L->pTail = pp;
    }
    L->spt++;
}  	
//------------------------------------//
void insert_After(List *L, Node *q, Data x) {
	Node *pp;
	if(NULL==q) 
		return;
	else {
    	pp = (Node*) malloc(sizeof(Node));
    	pp->infor = x;
    	pp->link = q->link;
		q->link = pp;
		if(q==L->pTail) 
			L->pTail = pp;
		L->spt++;  		
	}
}
//------------------------------------//
void del_Head (List *L) {
	Node *pp;
	if(emptyList(*L)) 
		return;
	else { 
		pp = L->pHead;
		L->pHead = pp->link;
		free(pp);
		L->spt--;
		if(L->pHead==NULL) 
			L->pTail=NULL;
	}
}
//------------------------------------//
void del_After (List *L, Node *q) {
	Node *pp;
	if(NULL==q) 
		return;
	else { 
		pp = q->link;
		q->link=pp->link;
		free(pp);
		L->spt--;
		if(NULL == L->pTail) 
			L->pTail=q;
	}
}
//------------------------------------//
void del_K(List *L, int K){
	Node *pp=L->pHead, *q;
	while (pp!=NULL && pp->infor!=K) {
		q=pp;
		pp=pp->link;
	}
	if(NULL==pp) 
		return;
	else
		if(pp==L->pHead)
			del_Head(L);
		else 
			del_After(L,q);
}
//------------------------------------//
void ProcessList(List *L) { 
	Node *p;
	p = L->pHead;
	while (p!=NULL) {
		printf("%d ",p->infor);
		p = p->link;
	}
}
//------------------------------------//
int main() {
	InitList(&L);
	insert_Head(&L,5);
	insert_Head(&L,4);
	insert_Head(&L,3);
	insert_Head(&L,2);
	insert_Head(&L,1);
	ProcessList(&L);
	del_K(&L,2);
	printf("\n");
	ProcessList(&L);
	return 0;
}
