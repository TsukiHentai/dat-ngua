#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char Ten[30];
	int ma;
	float hsl,pc;
}
nv;
typedef struct no
{
	no*next;
	no*pre;
	nv info;
	
}
Node;
typedef struct
{
	Node*phead;
	Node*ptail;
	int spt;
}
DList;


void initL(DList *L)
{
	L->phead=L->ptail=NULL;
	L->spt=0;
}
Node* newNode(nv Data)
{
	Node*p= (Node*)malloc(sizeof(Node));
	p->pre=NULL;
	p->next=NULL;
	p->info=Data;
	return p;
}
void insertHead(DList *L, nv Data)
{
	Node*p=newNode(Data);
	if(L->spt==0)
	{
		L->phead=L->ptail=p;
	}
	else
	{
		Node*pp=L->phead;
		p->next=pp;
		pp->pre=p;
		L->phead=p;
	}
	L->spt++;
}
void insertTail(DList *L,nv Data)
{
	Node*p=newNode(Data);
	if(L->spt==0)
	{
		L->phead=L->ptail=p;
	}
	else
	{
		L->ptail->next=p;
		p->pre=L->ptail;
		L->ptail=p;
	}
	L->spt++;
}
void insertAfter(DList *L,Node* q,nv Data)
{
	Node *n=newNode(Data);
	
	int chk=0;
	Node*pp=L->phead;
	while(pp!=NULL)
	{
		if(q==pp)
		{
			chk=1;
			break;
		}
		pp=pp->next;
	}
	if(!chk)
		return;
	if(pp==L->ptail)
	{
		insertTail(L,Data);
	}
	else
	{
		Node*B=pp->next;
		B->pre=n;
		n->next=B;
		n->pre=pp;
		pp->next=n;
	}
	L->spt++;
}
void deleteHead(DList *L)
{
	if(L->spt==0)
		return;
	if(L->spt==1)
	{
		free(L->phead);
		L->phead=L->ptail=NULL;
	}
	else
	{	
		Node*pp=L->phead;
		L->phead=pp->next;
		L->phead->pre=NULL;
		free(pp);
		
		if(L->spt==2)
			L->ptail=L->phead;
	}
	L->spt--;
}
void deleteAfter(DList *L,Node* q)
{
	int chk=0;
	if (q==L->ptail)
		return;
	Node*pp=L->phead;
	
	while(pp!=NULL)
	{
		if(q==pp)
		{
			chk=1;
			break;
		}
		pp=pp->next;
	}
	
	if(!chk)
		return;
	if(pp->next==L->ptail)
	{
		free(L->ptail);
		pp->next=NULL;
		L->ptail=pp;
	}
	else
	{
		Node*B=pp->next;
		Node*C=B->next;
		pp->next=C;
		C->pre=pp;
		free(B);
	}
	L->spt--;
}
void deleteKeyK(DList *L,int k)
{
	int chk=0;
	Node*pp=L->phead;
	if(L->phead->info.ma==k)
	{
		deleteHead(L);
		return;
	}
	while(pp!=NULL)
	{
		if(pp->next->info.ma==k)
		{
			chk=1;
			break;
		}
		pp=pp->next;
	}
	if(!chk)
		return;
	deleteAfter(L,pp);
}
nv newNV()
{
	nv a;
	fflush(stdin);
	printf("Moi ban nhap ten nhan vien: ");
	gets(a.Ten);	
	printf("Moi ban nhap ma nv: ");
	scanf("%d",&a.ma);
	printf("Moi ban nhap hsl/pc: ");
	scanf("%f%f",&a.hsl,&a.pc);
	return a;
}
void printNV(nv a)
{
	printf("Ten: %s ",a.Ten);
	printf("ma: %d ",a.ma);
	printf("hsl: %.2f ",a.hsl);
	printf("pc: %.2f\n",a.pc);
}
void TravelUp(DList L)
{
	for(Node*i=L.phead;i!=NULL;i=i->next)
	{
		printNV(i->info);
	}
}
void TravelDown(DList L)
{
	for(Node*i=L.ptail;i!=NULL;i=i->pre)
	{
		printNV(i->info);
	}
}
void FindNameSV(DList L,char Ten[30])
{
	for(Node*i=L.phead;i!=NULL;i=i->next)
	{
		if(strcmp(i->info.Ten,Ten)==0)
		{
			printNV(i->info);
			printf("Co phai nguoi ban can tim (y/k)? ");
			fflush(stdin);
			if(getch()=='y')
			{
				printf("\n");
				return;
			}
			printf("\n");
		}
	}
	printf("Het danh sach!\n");
}
int main()
{
	DList L;
	initL(&L);
	while(true)
	{
		printf("Menu:\n");
		printf("1. Them Dau\n");
		printf("2. Them cuoi\n");
		//printf("3. Them sau q\n"); Chi dung duoc khi co node q
		printf("3. Xoa dau\n");
		//printf("4. Xoa sau q"); chi dung duoc khi biet node q
		printf("4. xoa phan tu co ma K\n");
		printf("5. In Xuoi\n");
		printf("6. In nguoc\n");
		printf("7. Tim theo ten\n");
		printf("Ban chon?: ");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{				
				nv t=newNV();
				insertHead(&L,t);
			}
			break;
			case 2:
			{				
				nv t=newNV();
				insertTail(&L,t);
			}
			break;	
			case 3:
			{
				deleteHead(&L);
			}
			break;
			case 4:
			{
				int k;
				printf("Moi ban nhap khoa k: ");
				scanf("%d",&k);
				deleteKeyK(&L,k);
				
			}
			break;
			case 5:
			{
				TravelUp(L);
			}
			break;
			case 6:
			{
				TravelDown(L);
			}
			break;
			case 7:
			{
				printf("Moi ban nhap ten can tim: ");
				fflush(stdin);
				char ten[30];
				gets(ten);
				FindNameSV(L,ten);		
			}
			break;
			default:
				printf("Ban nhap sai roi!\n");
				break;
		}
	}
}
