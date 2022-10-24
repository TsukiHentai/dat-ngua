
#include<stdlib.h>

struct sinhvien
{
	int ma;
	string ten;
};
struct node
{
	sinhvien*data;
	struct node*link;
};
struct llist
{
	node*phead;
	node*ptail;
	int spt;
};
void taoDS(llist&l)
{
	l.phead=NULL;
	l.ptail=NULL;
	l.spt=0;
}
node*TaoNODE(sinhvien*sv)
{
	node*p=new node;
	p->data=sv;
	p->link=NULL;
	return p;
}
void themdau(llist &l,node*p)
{
	if(l.spt==0)
	{
		l.phead=l.ptail=p;
	}
	else
	{
		node*pp=l.phead;
		p->link=pp;
		l.phead=p;
		l.spt++;
	}
}
void themcuoi(llist&l,note*p)
{
	if(l.spt==0)
	{
		l.phead=l.ptail=p;
	}
	else
	{
		node*pp=l->ptail;
		pp->link=p;
		l->ptail=p;
		l.spt++;
		
	}
}
void nhapdanhsach(sinhvien&sv)
{
	cin>>sv.ma;
	fflush(stdin);
	getline(cin,sv.ten);
}
void indanhsach(llist*l)
{
	node*p=l->phead;
	while(p!=0)
	{
		sinhvien*sv=p->data;
		cout<<"MaSV: "<<sv->ma<<"Ten: "<<sv->ten;
		p=p->link;
	}
}
int main()
{
	taoDS *l;
	indanhsach*llist;
	return 0;
}
