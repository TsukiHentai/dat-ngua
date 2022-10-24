#include<iostream>
using namespace std;

// d? b�i: Nh?p v�o c�y nh? ph�n c�c s? nguy�n. Xu?t ra m�n h�nh c�c ph?n t? c?a c�y nh? ph�n
// khai b�o c?u tr�c  1 c�i node
struct node
{
	int data; // d? li?u c?a node ==> d? li?u m� node s? luu tr?
	struct node *pLeft; // node li�n k?t b�n tr�i c?a c�y <=> c�y con tr�i
	struct node *pRight; // node li�n k?t b�n ph?i c?a c�y <=> c�y con ph?i
};
typedef struct node NODE;
typedef NODE* TREE;

// kh?i t?o c�y
void KhoiTaoCay(TREE &t)
{
	t = NULL; // c�y r?ng
}

// h�m th�m ph?n t? x v�o c�y nh? ph�n
void ThemNodeVaoCay(TREE &t, int x)
{
	// n?u c�y r?ng
	if (t == NULL)
	{
		NODE *p = new NODE; // kh?i t?o 1 c�i node d? th�m v�o c�y
		p->data = x;// th�m d? li?u x v�o data
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;// node p ch�nh l� node g?c <=> x ch�nh l� node g?c
	}
	else // c�y c� t?n t?i ph?n t?
 	{
		// n?u ph?n t? th�m v�o m� nh? hon node g?c ==> th�m n� v�o b�n tr�i
		if (t->data > x)
		{
			ThemNodeVaoCay(t->pLeft, x); // duy?t qua tr�i d? th�m ph?n t? x
		}
		else if (t->data < x) // n?u ph?n t? th�m v�o m� l?n hon node g?c ==> th�m n� v�o b�n ph?i
		{
			ThemNodeVaoCay(t->pRight, x); // duy?t qua ph?i d? th�m ph?n t? x
		}
	}
}

// h�m xu?t c�y nh? ph�n theo NLR
void Duyet_NLR(TREE t)
{ 
	// n?u c�y c�n ph?n t? th� ti?p t?c duy?t
	if (t != NULL)
	{
		cout << t->data << " "; // xu?t d? li?u trong node
		Duyet_NLR(t->pLeft); // duy?t qua tr�i
		Duyet_NLR(t->pRight); // duy?t qua ph?i
	}
}
// h�m nh?p d? li?u
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
