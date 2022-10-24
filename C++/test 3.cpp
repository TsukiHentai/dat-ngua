#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct sv
{
	char ten[30];
	int mnv,ns;
	float hsl;
}
nv;
typedef struct NODE
{
	NODE *link;
	nv info;
}
node;
typedef struct
{
	node *phead;
	node *ptail;
	int spt;
}
llist;
void themdau(llist *L,nv x)
{
	node *p=(node*)malloc(sizeof(node));
	p->info=x;
	p->link=NULL;
	if(L->spt==0)
		L->phead=L->ptail=p;

	else
	{
		p->link=L->phead;
		L->phead=p;
	}
	L->spt++;
}
void themcuoi(llist *L,nv x)
{
	node*p=(node*)malloc(sizeof(node));
	p->info=x;
	p->link=NULL;
	if(L->spt==0)
		L->phead=L->ptail=p;
	else
	{
		L->ptail->link=p;
		L->ptail=p;
	}
	L->spt++;
}
void taods(llist *L)
{
	L->spt=0;
	L->phead=L->ptail=NULL;
}
void nhap(llist *L,nv x)
{
	taods(L);
	int n;
	printf("Nhap so luong nhan vien:\n ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("TenNV: ");
		fflush(stdin);
		gets(x.ten);
		printf("nhap mnv: ");
		scanf("%d",&x.mnv);
		printf("nhap hsl: ");
		scanf("%f",&x.hsl);
		printf("nhap nam sinh: ");
		scanf("%d",&x.ns);
		node *p=(node*)malloc(sizeof(node));
		themcuoi(L,x);
	}

}
void sx(llist *L)
{
	node *i,*j;
	sv temp;
	for(i=L->phead; i->link!=NULL; i=i->link)
		for(j=i->link;j->link!=NULL;j=j->link)
		{
			if((i->info.ns,j->info.ns)>0 || (i->info.ns,j->info.ns)==0 &&  i-> info.mnv  <  j->info.mnv )
			{
				temp=i->info;
				i->info=j->info;
				j->info=temp;
			}
		}
}

void in(llist L)
{
	for(node *p = L.phead; p!=NULL; p=p->link)
	{
		printf("\nTen: %s \nMNV: %d \nHSL: %.2f \nNAMSINH: %d\n",p->info.ten,p->info.mnv,p->info.hsl,p->info.ns);
	}
}
int main()
{
	llist L;
	nv x;
	nhap(&L,x);
	printf("\nDanh sach nhan vien: ");
	sx(&L);
	in(L);
}
