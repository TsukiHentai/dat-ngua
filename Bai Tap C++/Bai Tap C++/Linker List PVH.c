#include<stdio.h>
#include<stdlib.h>
 
struct LinkedList{
    int data;
    struct LinkedList *next;
 };
 
typedef struct LinkedList *node; //T? gi? d�ng ki?u d? li?u LinkedList c� th? thay b?ng node cho ng?n g?n
 
node CreateNode(int value){
    node temp; // declare a node
    temp = (node)malloc(sizeof(struct LinkedList)); // C?p ph�t v�ng nh? d�ng malloc()
    temp->next = NULL;// Cho next tr? t?i NULL
    temp->data = value; // G�n gi� tr? cho Node
    return temp;//Tr? v? node m?i d� c� gi� tr?
}
 
node AddTail(node head, int value){
    node temp,p;// Khai b�o 2 node t?m temp v� p
    temp = CreateNode(value);//G?i h�m createNode d? kh?i t?o node temp c� next tr? t?i NULL v� gi� tr? l� value
    if(head == NULL){
        head = temp;     //N?u linked list dang tr?ng th� Node temp l� head lu�n
    }
    else{
        p  = head;// Kh?i t?o p tr? t?i head
        while(p->next != NULL){
            p = p->next;//Duy?t danh s�ch li�n k?t d?n cu?i. Node cu?i l� node c� next = NULL
        }
        p->next = temp;//G�n next c?a th?ng cu?i = temp. Khi d� temp s? l� th?ng cu?i(temp->next = NULL m�)
    }
    return head;
}
 
 
node AddHead(node head, int value){
    node temp = CreateNode(value); // Kh?i t?o node temp v?i data = value
    if(head == NULL){
        head = temp; // //N?u linked list dang tr?ng th� Node temp l� head lu�n
    }else{
        temp->next = head; // Tr? next c?a temp = head hi?n t?i
        head = temp; // �?i head hi?n t?i = temp(V� temp b�y gi? l� head m?i m�)
    }
    return head;
}
 
node AddAt(node head, int value, int position){
    if(position == 0 || head == NULL){
        head = AddHead(head, value); // N?u v? tr� ch�n l� 0, t?c l� th�m v�o d?u
    }else{
        // B?t d?u t�m v? tr� c?n ch�n. Ta s? d�ng k d? d?m cho v? tr�
        int k = 1;
        node p = head;
        while(p != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh s�ch lk r?i m� v?n chua d?n v? tr� c?n ch�n, ta s? m?c d?nh ch�n cu?i
            // N?u b?n kh�ng mu?n ch�n, h�y th�ng b�o v? tr� ch�n kh�ng h?p l?
            head = AddTail(head, value);
            // printf("Vi tri chen vuot qua vi tri cuoi cung!\n");
        }else{
            node temp = CreateNode(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;
}
 
node DelHead(node head){
    if(head == NULL){
        printf("\nCha co gi de xoa het!");
    }else{
        head = head->next;
    }
    return head;
}
 
node DelTail(node head){
    if (head == NULL || head->next == NULL){
         return DelHead(head);
    }
    node p = head;
    while(p->next->next != NULL){
        p = p->next;
    }
    p->next = p->next->next; // Cho next b?ng NULL
    // Ho?c vi?t p->next = NULL cung du?c
    return head;
}
 
node DelAt(node head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        head = DelHead(head); // N?u v? tr� ch�n l� 0, t?c l� th�m v�o d?u
    }else{
        // B?t d?u t�m v? tr� c?n ch�n. Ta s? d�ng k d? d?m cho v? tr�
        int k = 1;
        node p = head;
        while(p->next->next != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh s�ch lk r?i m� v?n chua d?n v? tr� c?n ch�n, ta s? m?c d?nh x�a cu?i
            // N?u b?n kh�ng mu?n x�a, h�y th�ng b�o v? tr� x�a kh�ng h?p l?
            head = DelTail(head);
            // printf("Vi tri xoa vuot qua vi tri cuoi cung!\n");
        }else{
            p->next = p->next->next;
        }
    }
    return head;
}
 
int Get(node head, int index){
    int k = 0;
    node p = head;
    while(p != NULL && k != index){
        p = p->next;
    }
    return p->data;
}
 
int Search(node head, int value){
    int position = 0;
    node p;
    for(p = head; p != NULL; p = p->next){
        if(p->data == value){
            return position;
        }
        ++position;
    }
    return -1;
}
 
node DelByVal(node head, int value){
    int position = Search(head, value);
    while(position != -1){
        DelAt(head, position);
        position = Search(head, value);
    }
    return head;
}
 
void Traverser(node head){
    printf("\n");
    node p;
    for(p = head; p != NULL; p = p->next){
        printf("%5d", p->data);
    }
}
 
node InitHead(){
    node head;
    head = NULL;
    return head;
}
 
int Length(node head){
    int length = 0;
    node p;
	for(p = head; p != NULL; p = p->next){
        ++length;
    }
    return length;
}
 
node Input(){
    node head = InitHead();
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
 	int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = AddTail(head, value);
    }
    return head;
}
 
 
 
int main(){
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
    Traverser(head);
 
    printf("\n==Thu them 1 phan tu vao linked list==");
    head = AddAt(head, 100, 2);
    Traverser(head);
 
    printf("\n==Thu xoa 1 phan tu khoi linked list==");
    head = DelAt(head, 1);
    Traverser(head);
 
    printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    int index = Search(head, 5);
    printf("\nTim thay tai chi so %d", index);
 
    printf("\nBan co the thu them nhe!");
 
}
