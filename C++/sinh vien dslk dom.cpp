#include<stdio.h>


struct sinhvien{
	char tensv[20];
	char msv[10];
};
typedef struct sinhvien sv;

struct node{
	sv data;
	struct node *pnext;
};
typedef struct node NODE;

struct list{
	NODE *phead;
	NODE *ptail;
};
typedef struct list L;
 
void khoitaolist(list &L){
	L.phead=NULL;
	L.ptail=NULL;
}

NODE *khoitaonode(sv &x){
	NODE *p = new NODE;
	if(p==NULL){
		return NULL;
	}
	else{
		p->pnext=NULL;
		p->data=x;
	}
}

void addtail(list &L, NODE *p){
	if(L.ptail =NULL){
		L.phead = L.ptail = p;
	}
	else{
		L.ptail->pnext=p;
		L.ptail = p;
	}
}
int main(){
	list L;
	sv x;
	int n;
	printf("\nNhap so luong sinh vien:");
	scanf("%d",&n);
	khoitaolist(L);
	for(int i=1; i<=n;i++){

		printf("\nNhap ten sinh vien:");
		fflush(stdin);
		gets(x.tensv);
		printf("\nNhap ma sinh vien: ");
		fflush(stdin);
		gets(x.msv);
		NODE *p = khoitaonode(x);
		addtail(L,p);
	}
	for(NODE *p = L.phead; p!=NULL ; p=p->pnext){
		printf("\nDanh sach sinh vien la:");
		printf("%s %s",p->data.tensv,p->data.msv);
	}
	
}
