#include<stdio.h>
#include<string.h>
typedef struct// cau a
{
	char ten[50];
	long long int gia;
	int soluong;
}hh;
typedef struct NODE
{
	NODE*link;
	hh data;
}node;
typedef struct LLIST
{
	node*phead;
	node*ptail;
	int spt;
}llist;
void hoanvi(node*a,node*b)
{
	hh temp=a->data;
	a->data=b->data;
	b->data=temp;
}
void sx(llist*l)// cau b
{
//     int i=0; i<n;   i++
	if(l->spt==0&&l->spt==1)
	return;
	for(node*p=l->phead;p!=NULL;p=p->link)
	{
		for(node*pp=l->phead;pp!=NULL;pp=pp->link)
		{
			if(p->data.gia>pp->data.gia)
			{
				hoanvi(p,pp);
			}
			else
			{
				if(p->data.gia==pp->data.gia)
				{
					if(strcmp(p->data.ten,pp->data.ten)>0)
					{
						hoanvi(p,pp);
					}
				}
			}
		}
	}
}
