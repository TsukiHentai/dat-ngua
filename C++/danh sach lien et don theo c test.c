#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct sinhvien
{
	char ten[50];
	int msv;
	float diem;
}sv;
typedef struct NODE
{
	sv info;
	struct NODE*link;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
	int spt;
}llist;
void taods(llist*l)
{
	l->phead=l->ptail=NULL;
	l->spt=0;
}
node*taonode(sv x)
{
	node*p=(node*)malloc(sizeof(node));
	p->info=x;
	p->link=NULL;
	return p;
}
void themcuoi(llist*l,sv x)
{
	node*p=taonode(x);
	if(l->phead==NULL)
		l->phead=l->ptail=p;
	else
	{
		l->ptail->link=p;
		l->ptail=p;
	}
	l->spt++;
}
void themdau(llist *l,sv x)
{
	node*p=taonode(x);
	if(l->phead==NULL)
		l->phead=l->ptail=p;
	else
	{
		p->link=l->phead;
		p=l->phead;
	}
	l->spt++;
}
void themsau(llist*l)
{
	int a;
	printf("Nhap msv muon them vao sau: ");
	scanf("%d",&a);
	node*p;
	for(p=l->phead;p!=NULL;p=p->link)
	{
		if(p->info.msv==a)
		{
			sv x;
			printf("Nhap ten sv can them: ");
			fflush(stdin);
			gets(x.ten);
			printf("Nhap msv can them: ");
			scanf("%d",&x.msv);
			printf("Nhap diem sv can them: ");
			scanf("%f",&x.diem);
			node*pp=taonode(x);
			pp->link=p->link;
			p->link=pp;
			l->spt++;
		}
	}
}
void xoasau(llist *l,int x)
{
	printf("Nhap msv muon xoa sau: ");
	scanf("%d",&x);
	node*pp;
	int ch=1;
	for(pp=l->phead;pp!=NULL;pp=pp->link)
	{
		if(pp->info.msv==x)
		{
			break;
		}
		ch++;
	}
	if(ch==l->spt+1)
	{
		printf("Khong tim thay sinh vien can tim :(");
		return ;
	}else
	if(ch==l->spt)
	{
		printf("Sinh vien da la cuoi danh sach");
		return ;
	}else
	{
	node*e=pp->link;
	pp->link=pp->link->link;
	free(e);
	l->spt--;
	}
	printf("%d",ch);
}
void xoadau(llist *l)
{
	if(l->spt==0)
	return ;
	node*pp=l->phead;
	l->phead=pp->link;
	free(pp);
	l->spt--;
}
void nhap(llist*l)
{
	int n;
	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		sv a;
		printf("Nhap ten sv: ");
		fflush(stdin);
		gets(a.ten);
		printf("Nhap msv: ");
		scanf("%d",&a.msv);
		printf("Nhap diem: ");
		scanf("%f",&a.diem);
		themcuoi(l,a);
	}
}
/*void xoaten(llist *l, char ten[50])
{
	node*pp;
	int i=1;
	for(pp=l->phead;pp!=NULL;pp=pp->link)
	{
		if(strcmp(pp->info.ten,ten)==0)
		{
			break;
		}
		i++;
	}
	if(i==1)
	{
		xoadau(l);
		return;
	}else
	if(i==l->spt+1)
	{
		printf("Khong tim thay sinh vien can xoa: ");
		return;
	}else
	node*e;
	for(e=l->phead;e!=NULL;e=e->link)
}
*/
void timdiemmax(llist l)
{
	float max=0;
	node*p;
	int vitri=1;
	
	for(p=l.phead;p!=NULL;p=p->link)
	{
		if(p->info.diem>max)
		{
			max=p->info.diem;
		}
	}
	node*pp;
	for(pp=l.phead;pp!=NULL;pp=pp->link)
	{
		
		if(pp->info.diem==max)
		{
			printf("Thang diem cao nhat la: %s msv: %d diem: %.2f",pp->info.ten,pp->info.msv,pp->info.diem);
			break;
		}
	}
}
void in(llist l)
{
	node*p;
	for(p=l.phead;p!=NULL;p=p->link)
	{
		printf("Ten: %s MSV: %d\n",p->info.ten,p->info.msv,p->info.diem);
	}
	printf("So phan tu: %d\n",l.spt);
}
int main()
{
	llist l;
	nhap(&l);
	in(l);
	themsau(&l);
	in(l);
//	timdiemmax(l);
//	xoasau(&l,3);
//	in(l);
//	xoadau(&l);
//	in(l);
	//xoaten(&l,"duc");
	//in(l);
	return 0;
}
