#include<stdio.h>
//#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void printList(struct Node* node) {
	while(node!=NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}
int main() {
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	
	struct Node* new_node = NULL;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = 0;
	new_node->next = head;
	head = new_node;
	
	printf("\n");
	printList(head);
	
	struct Node* add_node = NULL;
	add_node = (struct Node*)malloc(sizeof(struct Node));
	add_node->data = 100;
	add_node->next = second->next;	
	second->next = add_node;
	
	printf("\n");
	printList(head);
		
	struct Node* end_node = NULL;
	end_node = (struct Node*)malloc(sizeof(struct Node));
	end_node->data = 500;
	end_node->next = NULL;	
	third->next = end_node;
	
	printf("\n");
	printList(head);
	
	struct Node* index_node = NULL;	
	index_node = (struct Node*)malloc(sizeof(struct Node));
	
	index_node = head;
	while(index_node!=NULL) {
		index_node = index_node->next;
	}
	printf("\n");
	printf("%d", index_node->data);
	
	return 0;
}
