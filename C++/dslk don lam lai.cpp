#include<stdio.h>
typedef struct NODE
{
	int info;
	struct NODE*link;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
	int spt;
}llist;
void taoDS(llist &l)
{
	l.phead=l.ptail=NULL;
	l.spt==0;
}
node*taonode(int x)
{
	node*p=new node;
	if(p==NULL)
		return NULL;
	p->info=x;
	p->link=NULL;
	return p;
}
void themdau(llist &l,int x)
{
	if(l.phead==NULL)
		l.phead=l.ptail=taonode(x);
	else
	{
		node*p=taonode(x);
		p->link=l.phead;
		l.phead=p;
		l.spt++;
	}
}
void themcuoi
void nhapds(llist &l)
{
	int n;
	printf("Nhap so node can them vao: \n");
	scanf("%d",&n);
	taoDS(l);
	for(int i=0;i<n;i++)
	{
		int x;
		printf("Nhap data vao: ");
		scanf("%d",&x);
		node*p=taonode(x);
		themdau(l,x);
	}
}
void inds(llist l)
{
	for(node*p=l.phead;p!=NULL;p=p->link)
	printf("%d ",p->info);
}
int main()
{
	llist l;
	nhapds(l);
	inds(l);
	
	
	
}
