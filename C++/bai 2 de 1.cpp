#include<stdio.h>
typedef struct nhansu
{
	char ten[50];
	int ma;
	float hsl;
	int namsinh;
}ns;
typedef struct NODE
{
	NODE*link;
	ns data;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
	int spt;
}llist;
void sapxep(llist *l)
{
	if(l->spt==0)
	return;
	else
	{
		for(node*p=l->phead;p!=NULL;p=p->link)
		{
			for(node*pp=l->phead;pp!=NULL;pp=pp->link)
			{
				if(p->data.namsinh<pp->data.namsinh)
				{
					ns temp=p->data;
					p->data=pp->data;
					pp->data=temp;
				}
				else
				if(p->data.namsinh==pp->data.namsinh)
				{
					if(p->data.ma<pp->data.ma)
					{
						ns temp=p->data;
						p->data=pp->data;
						pp->data=temp;
					}
				}
			}
		}
	}
}
