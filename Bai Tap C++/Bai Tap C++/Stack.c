#include<stdio.h>
#define Max 100
typedef int Item;
struct Stack{
	Item Elements[Max];
	unsigned int Top;
};
struct Stack S;
//---------------------------//
void Initialize(struct Stack *S) {
	S->Top = 0;
}
//---------------------------//
int Empty(struct Stack S) {
	return (S.Top == 0);
}
//---------------------------//
int Full(struct Stack S) {
	return (S.Top == Max);
}
//---------------------------//
int Push(struct Stack *S, Item X) {
	if (Full(*S))
		return 0;
	else {
		S->Top = S->Top + 1;
		S->Elements[S->Top] = X;
		return 1; 
	}		
}
//---------------------------//
int Pop (struct Stack *S, Item *X) {
	if (Empty(*S))
		return 0;
	else {
		*X = S->Elements[S->Top];
		S->Top = S->Top - 1;
		return 1;
	}		
}
int main() {
	Initialize(&S);
	Push(&S,1);
	Push(&S,2);
	Push(&S,3);
	Push(&S,4);
	Push(&S,5);
	Item X;
	while(!Empty(S)) {
		Pop(&S,&X);
		printf("%d ",X);		
	}
	return 0;
}
