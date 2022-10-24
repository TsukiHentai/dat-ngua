#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
	struct NODE*left;
	struct NODE*right;
	int data;
}node;
typedef node*TREE;
node*taonode(int x)
{
	node*p=(node*)malloc(sizeof(node));
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}
void taocay(tree*t)
{
	tree=NULL;
}
void chennode(TREE*t,int x)
{

	if(t==NULL)
	{
		node*p=taonode(x);
		t=p;
	}
	else
	{
		if((t->data)>x)
		{
			chennode(t->left,x);
		}
		else if(t->data<x)
		{
			chennode(t->right,x);
		}
	}
}
void inLNR(node * tree)
{
	if(tree!=NULL);
	{
		inLNR(tree->left);
		printf("%d-",tree->data);
		inLNR(tree->right);
	}
}
int main()
{
	node*l;
	taocay(l);
	chennode(l,20);
	chennode(l,16);
	chennode(l,10);
	chennode(l,13);
//	chennode(l,18);
//	chennode(l,25);
	inLNR(l);
	return 0;
}
