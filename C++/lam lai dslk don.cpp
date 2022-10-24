#include<stdio.h>
typedef struct NODE
{
	int data;
	struct NODE*link;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
}llist;
void taods(llist&l)
{
	l.phead=l.ptail=NULL;
}
node*taonode(int x)
{
	node*p=new node;
	if(p==NULL)
	return NULL;
	p->data=x;
	p->link=NULL;
	return p;
}
void themcuoi(llist&l,node *p)
{
	if(l.ptail==NULL)
	l.phead=l.ptail=p;
	else
	{
		l.ptail->link=p;
		l.ptail=p;
	}
}
void nhapds(llist &l)
{
	int n;
	printf("Nhap vao so pt: ");
	scanf("%d",&n);
	taods(l);
	for(int i=0;i<n;i++)
	{
		int x;
		printf("Nhap vao gia tri data: ");
		scanf("%d",&x);
		node*p=taonode(x);
		themcuoi(l,p);
	}
}
void inds(llist l)
{
	for(node*p=l.phead;p!=NULL;p=p->link)
		printf("%d",p->data);
}
int main()
{
	llist l;
	nhapds(l);
	inds(l);
}
