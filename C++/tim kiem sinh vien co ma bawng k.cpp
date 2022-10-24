#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct sinhvien
{
	char ten[50];
	int msv;
	int dem;
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
node*themnode(sv x)
{
	node*p=new node;
	if(p==NULL)
		return NULL;
	p->data=x;
	p->link=NULL;
	return p;
}
void themcuoi(llist&l, node*p)
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
	int a;
	printf("Nhap so sv can them: ");
	scanf("%d",&a);
	taods(l);
	for(int i=0;i<a;i++)
	{
		sv x;
		x.dem=0;
		printf("Nhap ten: ");
		fflush(stdin);
		gets(x.ten);
		printf("Nhap msv: ");
		scanf("%d",&x.msv);
		x.dem++;
		node*p=themnode(x);
		themcuoi(l,p);
	}
}
void inds(llist l)
{
	int vitri=1;
	for(node*p=l.phead;p!=NULL;p=p->link)
	{
		printf("Ten: %s ma: %d vitri: %d\n",p->data.ten,p->data.msv,vitri);
		vitri++;
	}
}
void tim(llist l)
{
	int n;
	printf("Nhap vao msv muon tim: ");
	scanf("%d",&n);
	int vt=0;
	int vitri=0;
	for(node*p=l.phead;p!=NULL;p=p->link)
	{
		vt++;
		vitri++;
		if(p->data.msv==n)
		{
			printf("Sinh vien co vi tri: %d\n",vt);
			printf("Ten: %s ma:%d",p->data.ten,p->data.msv);
			vitri--;
			break;
		}
	}
	if(vt==vitri)
	{
		printf("Khong tim thay sinh vien can tim");
	}
}
int main()
{
	llist l;
	nhapds(l);
	inds(l);
	tim(l);
}
