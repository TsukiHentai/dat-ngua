#include<stdio.h>
typedef struct node
{
	int info;
	struct node*link;
}node;
typedef struct list
{
	node*phead;
	node*ptail;
	int spt;
}llist;
node*newnode(int x)
{
	node*p=new node;
	if(p==NULL) return NULL;
	else
	{
		p->info=x;
		p->link=NULL;
		return p;
	}
}
void taoDS(llist&l)
{
	l.phead=l.ptail=NULL;
}
void themdau(llist&l,node*p)
{
	if(l.spt==0) l.phead=l.ptail=p;
	else
	{
		node*pp=l.phead;
		pp->link=l.phead;
		l.spt++;
	}
}
void nhap(llist&l)
{
	int n;
	taoDS(l);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		node*p=newnode(x);
		themdau(l,p);
	}
}
void xuat(llist l)
{
	for(node*p=l.phead;p!=NULL;p=p->link)
	{
		printf("%d ",p->info);
	}
}
int main()
{
	list l;
	nhap(l);
	xuat(l);
	return 0;
}
