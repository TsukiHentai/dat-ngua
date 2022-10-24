#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int ma;
	char hoten[50];
	float tin;
	float anh;
}sv;
typedef struct NODE
{
	sv data;
	NODE* left;
	NODE* right;
}node;
typedef node* tree;
void taocay(tree t)
{
	t=NULL;
}
void them(tree t,sv a)
{
	if(t==NULL)
	{
		node*p=(node*)malloc(sizeof(node));
		p->data=a;
		p->left=NULL;
		p->right=NULL;
		t=p;
	}
	else 
	if(a.ma<t->data.ma)
	them(t->left,a);
	else
	if(a.ma>t->data.ma)
	them(t->right,a);
}
void xuat(sv a)
{
	printf("Ten: %s,ma: %d, diem tin: %f, diem anh: %f",a.hoten,a.ma,a.tin,a.anh);
}
void LNR(tree t)
{
	if(t!=NULL)
	{
		LNR(t->left);
		xuat(t->data);
//		printf("Ten: %s,ma: %d, diem tin: %f, diem anh: %f",t->data.hoten,t->data.ma,t->data.tin,t->data.anh);
		LNR(t->right);
	}
}
void nodeha(tree x,tree y)
{
	if(y->left!=NULL)
	{
		nodeha(x,y->left);
	}
	else
	{
		x->data=y->data;
		x=y;
		y=y->right;
	}
}
void xoa(tree t,sv data)
{
	if(t==NULL)
	{
		return;
	}
	else
	{
		if(data.ma<t->data.ma)
		{
			xoa(t->left,data);
		}
		else if( data.ma>t->data.ma)
		{
			xoa(t->right,data);
		}
		else
		{
			node*x=t;
			if(t->left==NULL)
			{
				t=t->right;
			}
			else if(t->right==NULL)
			{
				t=t->left;
			}
			else
			nodeha(x,t->right);
			delete x;
		}
	}
}
void timkiemtb(tree t,float d)
{
	if(t!=NULL)
	{
		timkiemtb(t->left,d);
		if((t->data.tin+t->data.anh)/2>d);
		printf("Ten: %s,ma: %d, diem tin: %f, diem anh: %f",t->data.hoten,t->data.ma,t->data.tin,t->data.anh);
		timkiemtb(t->right,d);
	}
}
int main()
{
	int n;
	tree t;
	taocay(t);
	while(true)
	{
		sv a;
		printf("Menu:\n");
		int chon=0;
		printf("Nhap lua chon: \n");
		printf("1.Nhap du lieu:\n");
		printf("2.Xuat du lieu:\n");
		printf("3.Xoa:\n");
		printf("4.Tim kiem va in ra cac sinh vien co diem trung binh 2 mon lon hon bang X:\n");
		printf("5.Sua thong tin sinh vien:\n");
		scanf("%d",&chon);
		if(chon<1||chon>5)
		printf("Nhap sai cmmr!\n");
		if(chon==1)
		{
			printf("1.Nhap sinh vien: \n");
			printf("Nhap vao ten sinh vien: ");
			fflush(stdin);
			gets(a.hoten);
			printf("Nhap vao ma sinh vien: ");
			scanf("%d",&a.ma);
			printf("Nhap vao diem tin: ");
			scanf("%f",&a.tin);
			printf("Nhap vao diem anh: ");
			scanf("%f",&a.anh);
			
		}
		else
		if(chon==2)
		{
			LNR(t);
		}
		else
		if(chon==3)
			xoa(t,a);
		else
		if(chon==4)
		{
			float d;
			printf("Nhap vao diem trung binh can tim kiem: ");
			scanf("%f",&d);
			timkiemtb(t,d);
		}
		if(chon==0)
		break;
	}
	return 0;
}
