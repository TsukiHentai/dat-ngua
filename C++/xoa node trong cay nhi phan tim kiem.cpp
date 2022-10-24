#include<iostream>
using namespace std;
// khai b�o c?u tr�c 1 c�i node trong c�y nh? ph�n t�m ki?m
struct node
{
    int data; // d? li?u ch?a trong 1 c�i node
    struct node *pLeft; // con tr? li�n k?t v?i c�i node b�n tr�i <=> c�y con tr�i
    struct node *pRight; // con tr? li�n k?t v?i c�i node b�n ph?i <=> c�y con ph?i
};
typedef struct node NODE;
typedef NODE* TREE;
  
// h�m kh?i t?o c�y nh? ph�n t�m ki?m
void KhoiTaoCay(TREE &t)
{
    t = NULL;
}
  
// h�m th�m 1 c�i ph?n t? v�o c�y
void ThemNodeVaoCay(TREE &t, int x)
{
    // n?u c�y r?ng
    if (t == NULL)
    {
        NODE *p = new NODE;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else
    {
        // n?u ph?n t? th�m v�o m� nh? hon n�t g?c th� s? duy?t qua b�n tr�i
        if (x < t->data)
        {
            ThemNodeVaoCay(t->pLeft, x);
        }
        else if (x > t->data)
        {
            ThemNodeVaoCay(t->pRight, x);
        }
    }
}
  
// h�m xu?t ph?n t? trong c�y nh? ph�n t�m ki?m
void NLR(TREE t)
{
    if (t != NULL)
    {
        // x? l�
        cout << t->data << "  ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}
  
 
// h�m t�m node th? m?ng
void NodeTheMang(TREE &X, TREE &Y) // NODE Y l� node th? m?ng cho node c?n x�a - node n�y s? d?m nh?n nhi?m v? t�m ra node tr�i nh?t(T�M NODE TR�I NH?T C�Y CON PH?I) ho?c ph?i nh?t(T�M NODE PH?I NH?T C?A C�Y CON TR�I)
{
    // C�CH 1: T�M NODE TR�I NH?T C?A C�Y CON PH?I
    // duy?t sang b�n tr�i nh?t
    if (Y->pLeft != NULL)
    {
        NodeTheMang(X, Y->pLeft);// t�m ra node tr�i nh?t ?
    }
    else // t�m ra du?c node tr�i nh?t r?i nek..
    {
        X->data = Y->data; // c?p nh?t c�i data c?a node c?n x�a ch�nh l� data c?a node th? m?ng
        X = Y; // cho node X(l� node m� ch�ng ta s? di x�a sau n�y) tr? d?n node th? m?ng ==> ra kh?i h�m th� ta s? x�a node X
        Y = Y->pRight; // b?n ch?t ch? n�y ch�nh l� c?p nh?t l?i m?i li�n k?t cho node cha c?a node th? m?ng(m� ch�ng ta s? x�a) v?i node con c?a node th? m?ng  
    }
 
    /* C�CH 2: T�M NODE PH?I NH?T C?A C�Y CON TR�I
     duy?t sang b�n ph?i
     if (Y->pRight != NULL)
    {
        DiTimNodeTheMang(X, Y->pRight);// t�m ra node ph?i nh?t ?
    }
    else // t�m ra du?c node ph?i nh?t r?i nek..
    {
        X->data = Y->data; // c?p nh?t c�i data c?a node c?n x�a ch�nh l� data c?a node th? m?ng
        X = Y; // cho node X(l� node m� ch�ng ta s? di x�a sau n�y) tr? d?n node th? m?ng ==> ra kh?i h�m th� ta s? x�a node X
        Y = Y->pLeft; // b?n ch?t ch? n�y ch�nh l� c?p nh?t l?i m?i li�n k?t cho node cha c?a node th? m?ng(m� ch�ng ta s? x�a) v?i node con c?a node th? m?ng   
    } */
}
 
// h�m x�a 1 c�i node b?t k� trong c�y nh? ph�n t�m ki?m
void XoaNode(TREE &t, int data) // data ch�nh l� gi� tr? c?a c�i node c?n x�a
{
    // n?u nhu c�y dang r?ng
    if (t == NULL)
    {
        return; // k?t th�c h�m
    }
    else
    {
        // n?u nhu data nh? hon node g?c
        if (data < t->data)
        {
            XoaNode(t->pLeft, data); // duy?t sang nh�nh tr�i c?a c�y 
        }
        else if (data > t->data)
        {
            XoaNode(t->pRight, data); // duy?t sang nh�nh ph?i c?a c�y 
        }
        else // data == t->data - d� t�m ra c�i node c?n x�a
        {
            NODE *X = t; // node X l� node th? m?ng - t� n?a ch�ng ta s? x�a n�
            // n?u nhu nh�nh tr�i b?ng NULL <=> d�y l� c�y c� 1 con ch�nh l� con ph?i
            if (t->pLeft == NULL)
            {
                // duy?t sang ph?i c?a c�i node c?n x�a d? c?p nh?t m?i li�n k?t gi?a node 
                // cha c?a node c?n x�a v?i node con c?a node c?n x�a
                t = t->pRight; 
            }
            else if (t->pRight == NULL)
            {
                // duy?t sang tr�i c?a c�i node c?n x�a d? c?p nh?t m?i li�n k?t gi?a node 
                // cha c?a node c?n x�a v?i node con c?a node c?n x�a
                t = t->pLeft;
            }
            else // node c?n x�a l� node c� 2 con
            {
                // C�CH 1: T�m node tr�i nh?t c?a c�y con ph?i(c�y con ph?i c?a c�i node c?n x�a)
                NodeTheMang(X, t->pRight);
                // C�CH 2: T�m node ph?i nh?t c?a c�y con tr�i(c�y con tr�i c?a c�i node c?n x�a)
                //DiTimNodeTheMang(X, t->pLeft);
            }
            delete X; // x�a node c?n x�a
        }
    }
}
  
// h�m nh?p c�y nh? ph�n t�m ki?m
void Menu(TREE &t)
{
    int luachon;
    while(true)
    {
        cout << "\n\n\t\t ============ MENU ============";
        cout << "\n1. Nh?p ph?n t? cho c�y";
        cout << "\n2. Duy?t c�y";
        cout << "\n3. X�a m?t Node b?t k�";
        cout << "\n0. Tho�t";
        cout << "\n\n\t\t =============  END  =============";
  
        cout << "\nNh?p l?a ch?n c?a b?n: ";
        cin >> luachon;
  
        if (luachon == 1)
        {
            int x;
            cout << "\nNh?p gi� tr?: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2)
        {
            cout << "\nC�y nh? ph�n t�m ki?m\n";
            NLR(t);
        }
        else if (luachon == 3)
            {
                  int x;
                cout << "\nNh?p gi� tr? c?n x�a: ";
                cin >> x;
                XoaNode(t, x);
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
  
    cout<<"\n---------------------------------\n";
  cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
