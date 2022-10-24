#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct sinhvien
{
	char ten[50];
	int msv;
}sv;
typedef struct NODE
{
	sv data;
	struct NODE*link;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
}llist;
void taods(llist &l)
{
	l.phead=l.ptail=NULL;
}
node*taonode(sv x)
{
	node*p=new node;
	if(p==NULL)
	return NULL;
	p->data=x;
	p->link=NULL;
	return p;
}
void themcuoi(llist&l,node * p)
{
	if(l.ptail==NULL)
	l.phead=l.ptail=p;
	else
	{
		l.ptail->link=p;
		l.ptail=p;
	}
}
void nhapds(llist&l)
{
	int x;
	printf("Nhap so sinh vien can them: ");
	scanf("%d",&x);
	taods(l);
	for(int i=0;i<x;i++)
	{
		sv x;
		printf("Nhap ten sv: ");
		fflush(stdin);
		gets(x.ten);
		printf("Nhap ma sv: ");
		scanf("%d",&x.msv);
		node*p=taonode(x);
		themcuoi(l,p);
	}
}
void inds(llist l)
{
	for(node*p=l.phead;p!=NULL;p=p->link)
	{
		printf("%s-%d \n",p->data.ten,p->data.msv);
	}
}
int main()
{
	llist l;
	nhapds(l);
	inds(l);
}

