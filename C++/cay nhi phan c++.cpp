#include<iostream>
using namespace std;

// d? bài: Nh?p vào cây nh? phân các s? nguyên. Xu?t ra màn hình các ph?n t? c?a cây nh? phân
// khai báo c?u trúc  1 cái node
struct node
{
	int data; // d? li?u c?a node ==> d? li?u mà node s? luu tr?
	struct node *pLeft; // node liên k?t bên trái c?a cây <=> cây con trái
	struct node *pRight; // node liên k?t bên ph?i c?a cây <=> cây con ph?i
};
typedef struct node NODE;
typedef NODE* TREE;

// kh?i t?o cây
void KhoiTaoCay(TREE &t)
{
	t = NULL; // cây r?ng
}

// hàm thêm ph?n t? x vào cây nh? phân
void ThemNodeVaoCay(TREE &t, int x)
{
	// n?u cây r?ng
	if (t == NULL)
	{
		NODE *p = new NODE; // kh?i t?o 1 cái node d? thêm vào cây
		p->data = x;// thêm d? li?u x vào data
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;// node p chính là node g?c <=> x chính là node g?c
	}
	else // cây có t?n t?i ph?n t?
 	{
		// n?u ph?n t? thêm vào mà nh? hon node g?c ==> thêm nó vào bên trái
		if (t->data > x)
		{
			ThemNodeVaoCay(t->pLeft, x); // duy?t qua trái d? thêm ph?n t? x
		}
		else if (t->data < x) // n?u ph?n t? thêm vào mà l?n hon node g?c ==> thêm nó vào bên ph?i
		{
			ThemNodeVaoCay(t->pRight, x); // duy?t qua ph?i d? thêm ph?n t? x
		}
	}
}

// hàm xu?t cây nh? phân theo NLR
void Duyet_NLR(TREE t)
{ 
	// n?u cây còn ph?n t? thì ti?p t?c duy?t
	if (t != NULL)
	{
		cout << t->data << " "; // xu?t d? li?u trong node
		Duyet_NLR(t->pLeft); // duy?t qua trái
		Duyet_NLR(t->pRight); // duy?t qua ph?i
	}
}
// hàm nh?p d? li?u
void Menu(TREE &t)
{
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. Nhap du lieu";
		cout << "\n2. Xuat du lieu cay NLR";
		cout << "\n0. Ket thuc";
		cout << "\n\n\t\t ============================";

		int luachon;

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 2)
		{
			cout << "\nLua chon khong hop le";
			system("pause");
		}
		else if (luachon == 1)
		{
			int x;
			cout << "\nNhap so nguyen x: ";
			cin >> x;
			ThemNodeVaoCay(t, x);
		}
		else if (luachon == 2)
		{
			cout << "\n\t\t DUYET CAY THEO NLR\n";
			Duyet_NLR(t);
			system("pause");
		}
		else
		{
			break;
		}
	}
	
}

int main()
{
	TREE t;
	KhoiTaoCay(t);
	Menu(t);

	system("pause");
	return 0;
}
