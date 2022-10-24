//tao va in danh sachs lien ket don
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
void taodanhsach(llist&l)
{
	l.phead=l.ptail=NULL;
	l.spt==0;
}
node*themnode(int x)
{
	node*p=new node;
	if(p==NULL)
		return NULL;
	p->info=x;
	p->link=NULL;
	return p;
}
void themdau(llist&l,int x)
{
	if(l.phead==NULL)
		l.phead=l.ptail=themnode(x);
	else
	{
		node* p=themnode(x);
		p->link=l.phead;
		l.phead=p;
		l.spt++;		
	}
}
void themcuoi(llist&l,int x)
{
	if(l.ptail==NULL)
	l.phead=l.ptail=themnode(x);
	else
	{
		node*p=themnode(x);
		l.ptail->link=p;
		l.ptail=p;
		l.spt++;
	}
}
/*}void  themvaosau(llist&l,int a,int b)
{
	if(l.phead==NULL)
	return 0;
	else
	if(a==l.ptail->info)
	themcuoi(l,a);
	{
		for(node*p=l.phead;p!=NULL;)
	}
}*/
void nhapds(llist &l)
{
	int n;
	printf("Nhap so luong node can them: \n");
	scanf("%d",&n);
	taodanhsach(l);
	for(int i=0;i<n;i++)
	{
		int x;
		printf("Nhap data: ");
		scanf("%d",&x);
		node*p=themnode(x);
		themcuoi(l,x);
	}
}
void xuatds(llist l)
{
	for(node*p=l.phead;p!=NULL;p=p->link)
		printf("%d ",p->info);
}
int main()
{
	llist l;
	nhapds(l);
	xuatds(l);
}
