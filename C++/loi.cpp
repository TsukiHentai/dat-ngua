#include<stdio.h>
typedef struct 
{
	char hoten[50];
	int mns;
	float hsl;
	float luongcb;
}nv;
typedef struct NODE
{
	NODE*left;
	NODE*right;
	nv data;
}node;
typedef struct node*tree;
node* nhap(tree*l,nv a)
{
	printf("Nhap ten: ");fflush(stdin);gets(a.hoten);
	printf("Ma nhan su: ");scanf("%d",&a.mns);
	printf("He so luong: ");scanf("%f",&a.hsl);
	printf("Luong co ban: ");scanf("%f",&a.luongcb);
	node*p=(node*)malloc(sizeof(node));
	p->data=a;
	p->left=NULL;
	p->right=NULL;
	if(l==NULL)
		l=p;
	else
	{
		if(l->data.mns>a.mns)
		{
			nhap(l->left,a);
		}
		else if(l->data.mns<a.mns);
		{
			nhap(l->right,a);
		}
	}
}

