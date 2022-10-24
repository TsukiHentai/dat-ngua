#include<stdio.h>
#include<stdlib.h>
typedef struct sinhvien
{
	char hoten[30];
	int mns;
	float hsl;
	int luong;
}nv;
typedef struct NODE
{
	NODE*link;
	nv info;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
	int spt;
}llist;
void themdau(llist*l,nv a)
{
	node*p=(node*)malloc(sizeof(node));
	p->info=a;
	p->link=NULL;
	if(l==NULL)
	{
		l->phead=l->ptail=p;
		l->spt++;
	}else
	{
		p->link=l->phead;
		p=l->phead;
		l->spt++;
	}
}
void themsau(llist*l,nv a)
{
	node*p=(node*)malloc(sizeof(node));
	p->info=a;
	p->link=NULL;
	if(l==NULL)
	{
		l->phead=l->ptail=p;
		l->spt++;
	}
	else
	{
		l->ptail->link=p;
		p=l->ptail;
		l->spt++;
	}
}
void taods(llist*l)
{
	l->spt=0;
	l->phead=l->ptail=NULL;
}
void nhap(llist *l)
{
	int n;
	printf("Nhap vao so luong nhan vien: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		nv a;
//		printf("Nhap vao ten nhan vien: ");fflush(stdin);gets(a.hoten);
		printf("Nhap vao mns: ");scanf("%d",&a.mns);
		printf("Nhap vao he so luong: ");scanf("%f",&a.hsl);
		printf("Nhap vap luong: ");scanf("%d",&a.luong);
		themdau(l,a);
	}
}
void in(llist l)
{
	node*p=(node*)malloc(sizeof(node));
	for(p=l.phead;p!=NULL;p=p->link)
	{
		printf("haha");
		printf(" - ma nhan su: %d - he so luong: %f - luong: %d\n",p->info.mns,p->info.hsl,p->info.luong);
	}
}
int main()
{
	llist l;
	taods(&l);
	nhap(&l);
	in(l);
	return 0;
}
