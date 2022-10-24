#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char Ten[30];
	int msv;
}
sv;
typedef struct NODE
{
	NODE *Left;
	NODE *Right;
	int val;
}
Node;





Node* searchNode(Node*p,int val)
{
	Node*temp=p;
	while(temp!=NULL)
	{
		if (val==temp->val)
			return temp;
		if(val>temp->val)
			temp=temp->Right;
		else
			temp=temp->Left;
	}
	return NULL;
}
Node* minval(Node*p)//Tim Tan cung trai cua not p
{
	Node*temp=p;
	while(temp->Left!=NULL)
	{
		temp=temp->Left;
	}
	return temp;
}
Node* deleteNode(Node*p,int val)
{
	
	//B1 Duyet tim duoc
	//B2 Xet truong hoc
	//+ Cay khong co gi
	//+ khong co la
	//+ trai co, phai ko co
	//+ phai co, trai ko co
	//+trai co ,phai co
	//++ tim gia tri nho nhat tan cung ben trai cua not con phai
	if(val>p->val)
	{
		p->Right=deleteNode(p->Right,val);
		return p;
	}
	else
		if(val<p->val)
		{
			p->Left=deleteNode(p->Left,val);
			return p;
		}
	//Tim val trong node p , do xuong
	if(p==NULL)//ko tim thay
		return p;
	if(p->Left==NULL && p->Right==NULL)
	{
		free(p);
		return NULL;
	}
	if(p->Left==NULL)
	{
		p->val=p->Right->val;
		p->Right=deleteNode(p->Right,p->Right->val);
		return p;
	}
	if(p->Right==NULL)
	{
		p->val=p->Left->val;
		p->Left=deleteNode(p->Left,p->Left->val);
		return p;
	}
	Node*pp=minval(p->Right);
	if(pp==p->Right)
	{
		p->val=p->Right->val;
		p->Right=deleteNode(p->Right,p->Right->val);
		return p;
	}
	else
	{
		p->val=pp->val;
		p->Right=deleteNode(p->Right,pp->val);
		return p;
	}
	
}

Node* createNode(Node*p,int val)//(NULL)
{
	p=(Node*)malloc(sizeof(Node));
	p->val=val;
	p->Left=NULL;
	p->Right=NULL;
	return p;
}
///Bat dau them
void test(Node*p)
{
	p->val=60;
	p=NULL;
	
}
Node* insertNode(Node*p,int val)
{
	if(p==NULL)
	{
		return createNode(p,val);
	}

	if(val>p->val)
		p->Right=insertNode(p->Right,val);
	else
		p->Left=insertNode(p->Left,val);
	
	return p;
}

///Ket thuc them
void Node_left_right(Node*p)
{

	if (p!=NULL)
	{		
		printf("%d ",p->val);
		Node_left_right(p->Left);		
		Node_left_right(p->Right);
		
		
	}
	else
		return;
}
int main()
{
	Node* BS=NULL;
	BS=insertNode(BS,50);	
	insertNode(BS, 30); 
    insertNode(BS, 20); 
    test(BS->Left->Left);
    printf("%d ",BS->Left->Left->val);
//    insertNode(BS, 40); 
//    insertNode(BS, 70); 
//    insertNode(BS, 60); 
//    insertNode(BS, 80); 
//    insertNode(BS, 90); 
//	Node_left_right(BS); 
	//BS=deleteNode(BS,90);
	
//	printf("\n");
//	Node_left_right(BS); 
}
