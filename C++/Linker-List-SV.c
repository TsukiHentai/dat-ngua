#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h> 
typedef struct {
    char Hoten[30];
   	int MaSV;
   	float DiemTB;
} Data;
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
void Init_List(List *L) {
   	L->pHead = NULL;
   	L->pTail = NULL;
   	L->spt = 0;
}
//------------------------------------//
int emptyList(List L) {
    return (L.spt == 0); 
}
//------------------------------------//
void insert_Head(List *L, int Ma, char *Ten, float Diem) {
    Node *pp;
    pp = (Node*)malloc(sizeof(Node));
    
	//-------------------------//
	pp->infor.MaSV = Ma;
    strcpy(pp->infor.Hoten,Ten);
    pp->infor.DiemTB = Diem;
    //-------------------------//
    
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
void insert_Tail(List *L, int Ma, char *Ten, float Diem) {
    Node *pp;
    pp = (Node*) malloc(sizeof(Node));
    
	//-------------------------//
	pp->infor.MaSV = Ma;
    strcpy(pp->infor.Hoten,Ten);
    pp->infor.DiemTB = Diem;
    //-------------------------//
    
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
void insert_After(List *L, Node *q, int Ma, char *Ten, float Diem) {
	Node *pp;
	if(NULL==q) 
		return;
	else {
    	pp = (Node*) malloc(sizeof(Node));
    	
    	//-------------------------//
		pp->infor.MaSV = Ma;
    	strcpy(pp->infor.Hoten,Ten);
    	pp->infor.DiemTB = Diem;
    	//-------------------------//
    	
    	pp->link = q->link;
		q->link = pp;
		if(q==L->pTail) 
			L->pTail = pp;
		L->spt++;  		
	}
}
//------------------------------------//
void del_Head(List *L) {
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
void del_After(List *L, Node *q) {
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
	while (pp!=NULL && pp->infor.MaSV!=K) {
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
void Process_List(List *L) {
	Node *p;
	p = L->pHead;
	while (p!=NULL) {
		printf("\nMa SV: %d, Ten SV: %s, Diem TB: %1.1f", p->infor.MaSV, p->infor.Hoten,p->infor.DiemTB);
		p = p->link;		
	}
}
//------------------------------------//
void Process_List_If(List *L, float DK) {
	Node *p;
	p = L->pHead;
	while (p!=NULL) {
		if (p->infor.DiemTB >= DK)
			printf("\nMa SV: %d, Ten SV: %s, Diem TB: %1.1f", p->infor.MaSV, p->infor.Hoten,p->infor.DiemTB);
		p = p->link;		
	}
}
//------------------------------------//
bool Search_List(List* L, int x)  { 
    Node *p;
	p = L->pHead;  // Initialize current 
    while (p != NULL) { 
        if (p->infor.MaSV == x) 
            return true; 
        p = p->link; 
    } 
    return false; 
} 
//------------------------------------//
Node* Search_Node(List* L, int x)  { 
    Node *p;
	p = L->pHead;  // Initialize current 
    while (p != NULL) { 
        if (p->infor.MaSV == x) 
            return p; 
        p = p->link; 
    } 
    return NULL; 
}
//------------------------------------//
void Print_Node(Node *p) {
	printf("\nMa SV: %d, Ten SV: %s, Diem TB: %1.1f", p->infor.MaSV, p->infor.Hoten,p->infor.DiemTB);
}
//------------------------------------//
void Selection_Sort(List L) {
Node  *vtmin; 
Node *i, *j;
for (i=L.pHead; i->link!=NULL; i=i->link){  
	vtmin = i; 
	for(j = i->link; j!=NULL; j=j->link)
   		if (j->infor.MaSV < vtmin->infor.MaSV)
	   		vtmin = j;  	
		if (vtmin != i) {
			Data tg=vtmin->infor;
			vtmin->infor=i->infor;
			i->infor=tg;
		}
	}
}
//------------------------------------//
void Interchange_Sort(List L){	
	Node *i, *j;
	for (i=L.pHead; i->link!=NULL; i=i->link)
	   for (j=i->link; j!=NULL; j=j->link)
	       if(i->infor.MaSV < j->infor.MaSV) {
				Data tg=i->infor;
				i->infor=j->infor;
				j->infor=tg;
			}
}
//------------------------------------//
int main() {
	Init_List(&L);
	insert_Head(&L,5,"Dao Van Dong",7.5);
	insert_Head(&L,7,"Ngo Van Huy", 3.3);
	insert_Head(&L,8,"Nguyen Thi Hai", 8.3);
	insert_Head(&L,2,"Do Van Duong",4.4);
	insert_Head(&L,1,"Dao The Phong",7.8);
	insert_Head(&L,20,"Le Dang Quang",5.5);
	insert_Head(&L,12,"Nguyen Thuy Hong",9.4);
	Process_List(&L);
	printf("\n");
	Process_List_If(&L, 4.0); // Thong ke SV co Diem TB >= 7.0
	/* 
	pHead -> 12 -> 20 -> 1 -> 2 -> 8 -> 7 -> 5 -> NULL
	*/
	//Interchange_Sort(L);
	//insert_Tail(&L,100,"Nguyen Quang Huy",5.5);	
	//del_K(&L,20);
	//del_After(&L,Search_Node(&L,20));
	//del_Head(&L);
	//Print_Node(Search_Node(&L,12));
	//Process_List(&L);
	
	/*
	if(Search_List(&L,20)) 
		printf("Tim thay");
	else
		printf("Khong tim thay");
	*/	
	
	return 0;
}
