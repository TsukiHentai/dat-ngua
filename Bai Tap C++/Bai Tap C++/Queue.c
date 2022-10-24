#include<stdio.h>
#define Max 100
typedef int Item;
struct Queue {
	Item Elements[Max];
	unsigned int Front,Rear;
};
struct Queue Q;
//---------------------------//
void Initialize(struct Queue *Q) {
	Q->Front = 1;
	Q->Rear = 0;
}
//---------------------------//
int Empty(struct Queue Q) {
	return (Q.Rear == 0);
}
//---------------------------//
int Full(struct Queue Q) {
	return (Q.Rear == Max);
}
//---------------------------//
int AddQ(struct Queue *Q, Item X) {
	if (Full(*Q))
		return 0;
	else {
		Q->Rear = Q->Rear + 1;
		Q->Elements[Q->Rear] = X;
		return 1; 
	}		
}
//---------------------------//
int DelQ(struct Queue *Q, Item *X) {
	if (Empty(*Q))
		return 0;
	else {
		*X = Q->Elements[Q->Front];
		if (Q->Front == Q->Rear) { //Khoi tao lai hang doi
			Q->Front = 1;
			Q->Rear = 0;
		}
		else {
			Q->Front = Q->Front + 1;
			return 1;
		}		
	}		
}
//---------------------------//
int main() {
	Initialize(&Q);
	AddQ(&Q,1);
	AddQ(&Q,2);
	AddQ(&Q,3);
	AddQ(&Q,4);
	AddQ(&Q,5);
	int X;
	while(!Empty(Q)) {
		DelQ(&Q,&X);
		printf("%d ",X);
	}	
	return 0;
}
