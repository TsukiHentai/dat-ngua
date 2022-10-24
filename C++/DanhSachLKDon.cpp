#include<stdio.h>
#include<stdlib.h>
#include<string.h>//lien quan den xu ly chuoi
typedef struct 
{
	char Ten[30];
	int msv;
	float d1,d2,d3;
	void In()
	{
		printf("Ten: %s ",Ten);
		printf("msv: %d ",msv);
		printf("d1,d2,d3: (%.2f/%.2f/%.2f)\n",d1,d2,d3);
	}
	
}
SV;
typedef struct NODE
{
	NODE* link;	
	SV info;
}
Node;
typedef struct 
{
	Node*pHead;
	Node*pTail;
	int spt;
}
LList;
void intL(LList *L)
{
	L->spt=0;
	L->pHead=L->pTail=NULL;
}
SV taoSV()
{
	SV temp;
	
	printf("Moi ban nhap ten: ");
	fflush(stdin);
	gets(temp.Ten);
	printf("Moi ban nhap MSV/d1/d2/d3: ");
	scanf("%d",&temp.msv);
	scanf("%f",&temp.d1);	
	scanf("%f",&temp.d2);
	scanf("%f",&temp.d3);
	return temp;
}
Node* initNode(SV x)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->link=NULL;
	return p;
}
void insertHead(LList*L,SV x) //Them dau
{
	Node*p = initNode(x);
	if(L->spt==0)
		L->pHead=L->pTail=p;
	else
	{		
		p->link=L->pHead;
		L->pHead=p;
	}
	L->spt++;
}
void insertTail(LList*L,SV x) //Them duoi
{
	Node*p = initNode(x);
	if(L->spt==0)
		L->pHead=L->pTail=p;
	else
	{		
		Node*pp= L->pTail;
		pp->link=p;
		L->pTail=p;
	}
	L->spt++;
}


void deleteAfter(LList*L,Node*p)
{
	Node*pp=L->pHead;
	int chk=0;
	while(pp!=NULL)
	{
		if(pp==p)
		{		
			chk=1;
			break;
		}
		pp=pp->link;
	}
	if(!chk)//neu trong if la 1 thi se la true, la 0 la false ,chk==0
		return;
	if(pp==L->pTail)
		return;
	
	Node* B=pp->link;	//hieu pp la A	
	pp->link=B->link;
	free(B);
	if(pp->link==NULL)
		L->pTail=pp;
	L->spt--;
}
void deleteHead(LList*L)
{
	if(L->spt==0)
		return;
	Node*pp=L->pHead;
	L->pHead=pp->link;
	free(pp);
	L->spt--;
}
void deletekeyK(LList*L,char Ten[30])
{
	Node*pp=L->pHead;
	if(strcmp(pp->info.Ten,Ten)==0)
	{		
		deleteHead(L);
		return;
	}
	int chk=0;
	
	while(pp!=NULL)
	{
		if(strcmp(pp->link->info.Ten,Ten)==0)
		{		
			chk=1;
			break;
		}
		pp=pp->link;
	}
	if(chk==0)
		return;
	
	deleteAfter(L,pp);
}
void findSV(LList L,char Ten[30])
{
	for(Node *i=L.pHead;i!=NULL;i=i->link)//for(int i=0;i<n;i++)
	{
		if(strcmp(i->info.Ten,Ten)==0)
		{
			i->info.In();
			fflush(stdin);
			printf("Day co phai nguoi ban can tim khong? (y/k): ");
			char c;
			scanf("%c",&c);
			if(c!='k')
				return;
		}
	}
	printf("Het danh sach roi\n");
}
void _swap(Node *a,Node *b)
{
	SV t1=a->info;
	SV t2=b->info;
	a->info=t2;
	b->info=t1;
	//doi tung cai 1,doi info
}
float dtb(SV a)
{
		return (a.d1+a.d2+a.d3)/3;
}
void sapXep(LList* L)
{
	for(Node *i=L->pHead;i!=NULL;i=i->link)//for(int i=0;i<n;i++)
	{
		for(Node *j=i->link;j!=NULL;j=j->link)//for chay theo dia chi
		{
			if(dtb(i->info)>dtb(j->info))
			{
				_swap(i,j);
				
			}
		}
	}
}
void In(LList L)
{
	for(Node *i=L.pHead;i!=NULL;i=i->link)//for(int i=0;i<n;i++)
	{
		printf("Ten: %s ",i->info.Ten);
		printf("MSV: %d ",i->info.msv);
		printf("d1: %.2f ",i->info.d1);
		printf("d2: %.2f ",i->info.d2);
		printf("d3: %.2f\n",i->info.d3);
	}
}

int main()
{
	LList L;
	intL(&L);
	
	
	
	while(true)
	{
		printf("Moi cac ban chon:\n");
		printf("1. Them Dau\n");
		printf("2. Them Cuoi\n");
		printf("3. In ds SV\n");
		printf("4. Xoa theo Ten\n");
		printf("5.Tim theo ten\n");
		printf("6.Sap xep tang dan\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)		
		{
			case 1:
				{			
					SV a=taoSV();//khoi tao 1 sinh vien
					insertHead(&L,a);
				
				}
				break;
			case 2:
				{			
					SV a=taoSV();//khoi tao 1 sinh vien
					insertTail(&L,a);
				}
				break;
			case 3:
				printf("Danh sach sv la: \n");
				In(L);
				break;
			case 4:
				{
					fflush(stdin);
					printf("Moi ban nhap ten de xoa: ");
					char ten[30];
					gets(ten);
					deletekeyK(&L,ten);
				}
				break;
			case 5:
				{
					fflush(stdin);
					printf("Moi ban nhap ten de tim: ");
					char ten[30];
					gets(ten);
					findSV(L,ten);
				}
				break;
			case 6:
				{
					sapXep(&L);
					
				}
				
				break;
			default:
				printf("Ban nhap sai roi!\n");
				break;
		}
	}
}
