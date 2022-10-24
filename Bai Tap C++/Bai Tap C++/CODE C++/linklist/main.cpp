#include <iostream>
#include <malloc.h>

using namespace std;

#define Item int
struct Node {
    Item Infor;
    struct Node *Next;
};
struct Node *L;

void Insert(struct Node *Q, Item X)
{
    struct Node *p;

    //1. Tao mot nut moi
    p = (struct Node *)malloc(sizeof(struct Node));
    p->Infor = X;
    //2. Bo sung neu danh sach rong
    if (L == NULL){
        p->Next = NULL;
        L = p;
    }
    //3. Bo sung neu danh sach khong rong
    else{
        p->Next = Q->Next;
        Q->Next = p;
    }

}

int DeleteL (struct Node *Q, Item X) {
    struct Node *R;
    //1. Danh sach rong
    if (L==NULL){
        return 0;
    }
    X = Q->Infor;
    //2. Truonng hop nut tro boi Q la nut dau tien
    if (Q==L){
        L=Q->Next;
        free(Q);
        return 1;
    }
    //3. Tim den nut dung truoc nut tro boi Q
    R = L;
    while (R->Next!=Q)
        R=R->Next;
    //4. Loai bo nut tro boi Q
    Q->Next = Q->Next;
    free(Q);
}

void initNode(struct Node *L, Item n){
    L->Infor = n;
	L->Next =NULL;
}

void display(struct Node *L) {
	Node *list = L;
	while(list) {
		cout << list->Infor << " ";
		list = list->Next;
	}
	cout << endl;
	cout << endl;
}


int main()
{
    struct Node *newHead;
	struct Node *head = new Node;

	initNode(head,10);


	initNode(head,20);


	initNode(head,30);

    display(head);

/*
	Insert(head, 30);
	display(head);
*/
    return 0;
}
