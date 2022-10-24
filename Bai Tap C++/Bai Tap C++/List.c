#include<stdio.h>
#include <stdlib.h>
#define MaxLength 50
typedef int Data;
//----------------------------------//
struct List {
	Data Elements[MaxLength];
	int Last;
};
struct List L;
//----------------------------------//
void Initialize(struct List *L);					//1. Khoi tao ds rong
int Length(struct List *L);							//2. Xac dinh do dai cua ds
int Delete(int k, struct List *L);					//3. Loai phan tu o vi tri thu k cua ds
int Insert(int k, Data X, struct List *L);			//4. Xem phan tu X vao ds vi tri k
int Search(Data X, struct List* L);					//5.Tim phan tu X trong ds
int Emty(struct List *L);							//6. Kiem tra xem ds co rong khong?
int Full(struct List *L);							//7. Kiem tra xem ds co day khong?
void Traverse(struct List *L);						//8. Duyet danh sach 
//----------------------------------//
int main() {
	Initialize(&L); //Khoi tao danh sach rong
	int i;
    for(i=1;i<=10;i++) {
        L.Elements[i]=rand()%100-30;
    }
    L.Last=10;
    Traverse(&L);

    if (Insert(8,-1000,&L)==1)
        Traverse(&L);
    else
        printf("Khong them duoc vao sanh sach");

    if (Delete(3,&L)==1)
        Traverse(&L);
    else
        printf("Khong xoa duoc danh sach");

    int X, Flag;
    printf("Nhap vao so can tim:");
    scanf("%d",&X);
    Flag = Search(X,&L);
    if (Flag!=0)
        printf("Tim thay phan tu o vi tri: %d", Flag);
    else
        printf("Khong tim thay");

	return 0;
}
//----------------------------------//
void Initialize(struct List *L) {
	L->Last = 0;	
}
//----------------------------------//
int Length(struct List *L) {
	return L->Last; 
}
//----------------------------------//
int Delete(int k, struct List *L) {
	int i;
    if (k>=1 && k<=L->Last){
        i = k;
        while (i<L->Last){
            L->Elements[i] = L->Elements[i+1];
            i++;
        }
        L->Last = L->Last - 1;
        return 1;
    }
    return 0;
}
//----------------------------------//
int Insert(int k, Data X, struct List *L) {
	int i;
    if (L->Last<MaxLength && k>=1 && k<=L->Last){
        i = L->Last + 1;
        while (i > k) {
            L->Elements[i] = L->Elements[i-1];
            i--;
        }
        L->Last = L->Last + 1;
        L->Elements[k] = X;
        return 1;
    }
    return 0;	
}
//----------------------------------//
int Search(Data X, struct List* L) {
	int i=1;
    while(L->Elements[i]!=X && i<=L->Last)
        i++;
    if (i<=L->Last)
        return i;
    else
        return 0;
}
//----------------------------------//
int Emty(struct List *L) {
	if (L->Last == 0)
        return 1;
    else
        return 0;
}
//----------------------------------//
int Full(struct List *L) {
	if (L->Last == MaxLength)
        return 1;
    else
        return 0;
}
//----------------------------------//					
void Traverse(struct List *L) {
	int i;
    for (i=1; i<=L->Last; i++)
    	printf("Elements[%d] = %d\n",i,L->Elements[i]);
}
//----------------------------------//



