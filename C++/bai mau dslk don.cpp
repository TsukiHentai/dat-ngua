#include<stdio.h>
#include<conio.h>

// B1: Khai bao CTDL ds lien ket don 

struct Node{
	int Data;
	struct Node*pNext;
};
typedef struct  Node NODE;

struct List{
	NODE *pHead;
	NODE *pTail; 
};
typedef struct List LIST;

// B2: Khoi tao ds lien ket don

void Init(LIST &l){
	l.pHead = l.pTail = NULL;
}

// B3: Tao Node trong danh sach
NODE * GetNode(int x) // x chinh la du lieu dua vao Data
{
	// Cap phat bo nho dong (cap phat 1 Node)
	NODE *p = new NODE;
	if(p == NULL){
		return NULL;
	}
	p->Data = x; // Luu vao data x
	p->pNext = NULL; //Khoi tao moi lien ket
	return p;
}

//B3: Them Node (them dau hoac them cuoi)

// 1 2 3 4 5: Them dau
// 5 4 4 2 1: Them cuoi

// Them Node p vao dau danh sach
void themdau(LIST &l, NODE *p){
	if(l.pHead == NULL) // Tuc la danh sach rong
	{
		l.pHead = l.pTail = p;
	}
	
	else{
		p -> pNext = l.pHead; // p quang day de tham gia vao danh sach
		l.pHead = p; // p chinh thuc dung dau danh sach
	}	
}

void themcuoi(LIST &l, NODE *p){
	if(l.pTail == NULL){
		l.pHead = l.pTail = p;
	}
	else {
		l.pTail -> pNext = p; // l.PTail quang day noi voi p
		l.pTail = p;
	}
}

// B5:Nhap du lieu cho danh sach

void nhap(LIST &l){
	int n;
	printf("\nNhap so luong Node: ");
	scanf("%d",&n);
	Init(l); //Khoi tao danh sach
	
	for(int i=1; i<=n;i++){
		// Moi lan vong lap chay la ta nhap 1 Node
		int x;
		printf("\nNhap vao data: ");
		scanf("%d",&x);
		Node *p = GetNode(x); // Dua data vao node p, tao ra node p
		//themcuoi(l,p); //Them Node p vao cuoi danh sach
		themdau(l,p);
	}
}
void in(LIST l){
	for(Node *p = l.pHead; p!=NULL; p = p->pNext){
		printf("%4d", p->Data);
	}
}
int timMax(LIST l){
	int Max = l.pHead->Data;
	for(Node *p = l.pHead; p!=NULL; p= p->pNext){
		if(p->Data > Max){
			Max = p->Data;
		}
	}
	return Max;
}
int main(){
	LIST l;
	nhap(l);
	in(l);
	int Max=timMax(l);
	printf("\nMax la: %3d",Max);
	return 0;
}
