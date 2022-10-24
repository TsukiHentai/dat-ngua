#include<iostream>
using namespace std;
// khai báo c?u trúc 1 cái node trong cây nh? phân tìm ki?m
struct node
{
    int data; // d? li?u ch?a trong 1 cái node
    struct node *pLeft; // con tr? liên k?t v?i cái node bên trái <=> cây con trái
    struct node *pRight; // con tr? liên k?t v?i cái node bên ph?i <=> cây con ph?i
};
typedef struct node NODE;
typedef NODE* TREE;
  
// hàm kh?i t?o cây nh? phân tìm ki?m
void KhoiTaoCay(TREE &t)
{
    t = NULL;
}
  
// hàm thêm 1 cái ph?n t? vào cây
void ThemNodeVaoCay(TREE &t, int x)
{
    // n?u cây r?ng
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
        // n?u ph?n t? thêm vào mà nh? hon nút g?c thì s? duy?t qua bên trái
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
  
// hàm xu?t ph?n t? trong cây nh? phân tìm ki?m
void NLR(TREE t)
{
    if (t != NULL)
    {
        // x? lí
        cout << t->data << "  ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}
  
 
// hàm tìm node th? m?ng
void NodeTheMang(TREE &X, TREE &Y) // NODE Y là node th? m?ng cho node c?n xóa - node này s? d?m nh?n nhi?m v? tìm ra node trái nh?t(TÌM NODE TRÁI NH?T CÂY CON PH?I) ho?c ph?i nh?t(TÌM NODE PH?I NH?T C?A CÂY CON TRÁI)
{
    // CÁCH 1: TÌM NODE TRÁI NH?T C?A CÂY CON PH?I
    // duy?t sang bên trái nh?t
    if (Y->pLeft != NULL)
    {
        NodeTheMang(X, Y->pLeft);// tìm ra node trái nh?t ?
    }
    else // tìm ra du?c node trái nh?t r?i nek..
    {
        X->data = Y->data; // c?p nh?t cái data c?a node c?n xóa chính là data c?a node th? m?ng
        X = Y; // cho node X(là node mà chúng ta s? di xóa sau này) tr? d?n node th? m?ng ==> ra kh?i hàm thì ta s? xóa node X
        Y = Y->pRight; // b?n ch?t ch? này chính là c?p nh?t l?i m?i liên k?t cho node cha c?a node th? m?ng(mà chúng ta s? xóa) v?i node con c?a node th? m?ng  
    }
 
    /* CÁCH 2: TÌM NODE PH?I NH?T C?A CÂY CON TRÁI
     duy?t sang bên ph?i
     if (Y->pRight != NULL)
    {
        DiTimNodeTheMang(X, Y->pRight);// tìm ra node ph?i nh?t ?
    }
    else // tìm ra du?c node ph?i nh?t r?i nek..
    {
        X->data = Y->data; // c?p nh?t cái data c?a node c?n xóa chính là data c?a node th? m?ng
        X = Y; // cho node X(là node mà chúng ta s? di xóa sau này) tr? d?n node th? m?ng ==> ra kh?i hàm thì ta s? xóa node X
        Y = Y->pLeft; // b?n ch?t ch? này chính là c?p nh?t l?i m?i liên k?t cho node cha c?a node th? m?ng(mà chúng ta s? xóa) v?i node con c?a node th? m?ng   
    } */
}
 
// hàm xóa 1 cái node b?t kì trong cây nh? phân tìm ki?m
void XoaNode(TREE &t, int data) // data chính là giá tr? c?a cái node c?n xóa
{
    // n?u nhu cây dang r?ng
    if (t == NULL)
    {
        return; // k?t thúc hàm
    }
    else
    {
        // n?u nhu data nh? hon node g?c
        if (data < t->data)
        {
            XoaNode(t->pLeft, data); // duy?t sang nhánh trái c?a cây 
        }
        else if (data > t->data)
        {
            XoaNode(t->pRight, data); // duy?t sang nhánh ph?i c?a cây 
        }
        else // data == t->data - dã tìm ra cái node c?n xóa
        {
            NODE *X = t; // node X là node th? m?ng - tí n?a chúng ta s? xóa nó
            // n?u nhu nhánh trái b?ng NULL <=> dây là cây có 1 con chính là con ph?i
            if (t->pLeft == NULL)
            {
                // duy?t sang ph?i c?a cái node c?n xóa d? c?p nh?t m?i liên k?t gi?a node 
                // cha c?a node c?n xóa v?i node con c?a node c?n xóa
                t = t->pRight; 
            }
            else if (t->pRight == NULL)
            {
                // duy?t sang trái c?a cái node c?n xóa d? c?p nh?t m?i liên k?t gi?a node 
                // cha c?a node c?n xóa v?i node con c?a node c?n xóa
                t = t->pLeft;
            }
            else // node c?n xóa là node có 2 con
            {
                // CÁCH 1: Tìm node trái nh?t c?a cây con ph?i(cây con ph?i c?a cái node c?n xóa)
                NodeTheMang(X, t->pRight);
                // CÁCH 2: Tìm node ph?i nh?t c?a cây con trái(cây con trái c?a cái node c?n xóa)
                //DiTimNodeTheMang(X, t->pLeft);
            }
            delete X; // xóa node c?n xóa
        }
    }
}
  
// hàm nh?p cây nh? phân tìm ki?m
void Menu(TREE &t)
{
    int luachon;
    while(true)
    {
        cout << "\n\n\t\t ============ MENU ============";
        cout << "\n1. Nh?p ph?n t? cho cây";
        cout << "\n2. Duy?t cây";
        cout << "\n3. Xóa m?t Node b?t kì";
        cout << "\n0. Thoát";
        cout << "\n\n\t\t =============  END  =============";
  
        cout << "\nNh?p l?a ch?n c?a b?n: ";
        cin >> luachon;
  
        if (luachon == 1)
        {
            int x;
            cout << "\nNh?p giá tr?: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2)
        {
            cout << "\nCây nh? phân tìm ki?m\n";
            NLR(t);
        }
        else if (luachon == 3)
            {
                  int x;
                cout << "\nNh?p giá tr? c?n xóa: ";
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
  cout<<"Chuong trình này du?c dang t?i Freetuts.net";
}
