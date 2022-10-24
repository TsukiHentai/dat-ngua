#include <iostream>
#include <stdlib.h>
using namespace std;

#define Maxlength 100
#define Item int
//----------------------------------------------------//
struct List {
    Item E [Maxlength];
    int Count;
};
struct List L;
//----------------------------------------------------//
void Initializer(struct List *L){
    L->Count = 0;
}
//----------------------------------------------------//
int Length(List *L) {
    return L->Count;
}
//----------------------------------------------------//
int Delete (int k, struct List *L){
    int i;
    if (k>=1 && k<=L->Count){
        i = k;
        while (i<L->Count){
            L->E[i] = L->E[i+1];
            i++;
        }
        L->Count = L->Count - 1;
        return 1;
    }
    return 0;
}
//----------------------------------------------------//
int Insert (int k, int X, struct List *L){
    int i;
    if (L->Count<Maxlength && k>=1 && k<=L->Count){
        i = L->Count+1;
        while (i>k){
            L->E[i] = L->E[i-1];
            i--;
        }
        L->Count = L->Count + 1;
        L->E[k]=X;
        return 1;
    }
    return 0;
}
//----------------------------------------------------//
int Search(int X, List *L){
    int i=1;
    while(L->E[i]!=X && i<=L->Count)
        i++;
    if (i<=L->Count)
        return i;
    else
        return 0;
}
//----------------------------------------------------//
int Empty (List *L){
    if (L->Count == 0)
        return 1;
    else
        return 0;
}
//----------------------------------------------------//
int Full (List *L){
    if (L->Count == Maxlength)
        return 1;
    else
        return 0;
}
//----------------------------------------------------//
void Traverse(List *L){
    int i;
    for (i=1; i<=L->Count; i++)
        cout << "E[" << i <<"]=" << L->E[i] << endl;
}
//----------------------------------------------------//
int main()
{
    Initializer(&L); //Khoi tao danh sach rong

    for (int i=1;i<=10;i++){ //Gán giá trị cho các phần tử trong ds
        L.E[i]=rand()%100;
    }
    L.Count=10;

    Traverse(&L);


    if (Insert(8,-1000,&L)==1)
        Traverse(&L);
    else
        cout << "Không thêm được vào danh sách";

    if (Delete(3,&L)==1)
        Traverse(&L);
    else
        cout << "Không xóa được danh sách";

    int X, F;
    cout << "Nhap vao so can tim:";
    cin >> X;
    F = Search(X,&L);
    if (F !=0)
        cout << "Tim thay phan tu o vi tri:" << F;
    else
        cout << "Khong tim thay";

    return 0;
}
