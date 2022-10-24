#include<iostream>
using namespace std;
class node
{
	friend class llist;
	int info;
	node*link;
	public:
		node()
		{
			link=NULL;
		}
		node(int x)
		{
			this->info=x;
			link=NULL;
		}
		
};
class llist 
{

	node*phead;
	node*ptail;
	int spt;
	public:
		llist()
		{
			phead=NULL;
			ptail=NULL;
			spt=0;
		}
		void themdau(int x);
		void themcuoi(int x);
		void themsau(int x, int y);
		void xoacuoi();
		void xoadau();
		void in();
		
};
void llist::themdau(int x)
{
	node*p=new node(x);
	if(spt==0)
	{
		phead=ptail=p;
	}
	else
	{
		p->link=phead;
		phead=p;
	}
	spt++;
}
void llist::themcuoi(int x)
{
	node*p=new node(x);
	if(spt==0)
	{
		phead=ptail=p;
	}
	else
	{
		ptail->link=p;
		ptail=p;
	}
}
void themsau(int x,node*a)
{
	node*p=new node(x);
	node*pp;
	int g=0;
	for(pp=phead;pp!=NULL;pp=pp->link)
	{
		g++;
		if(pp==a)
		{
			break;
		}
	}
	if(g==spt+1)
	{
		return;
	}
	if(g==spt)
	{
		themcuoi(x);
	}
	else
	{
		p->link=pp->link;
		pp->link=p;
		spt++;
	}
}
void llist::xoadau()
{
	node*p=phead->link;
	phead->link->link=phead;
	delete p;
}
void llist::in()
{
	node*p;
	for(p=phead;p!=NULL;p=p->link)
	{
		cout<<p->info;
	}
}
int main()
{
	llist l;
	l.themdau(3);
	l.themcuoi(4);
	l.in();
}

