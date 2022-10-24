#include<stdio.h>
#include<set>
#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<queue>
#include<stdlib.h>
#include <fstream>
using namespace std;
//Khai bao
int const COL=9;
int const ROW=10;
const int maze[COL][ROW]=
						{{1,1,0,1,1},
						{0,1,0,1,0},
						{1,1,1,1,0},
						{0,1,0,1,0},
						{1,0,1,1,1}
						};
const char* action[]={"Trang thai ban dau","UP","DOWN","LEFT","RIGHT"};
struct State{
	int x;
	int y;
};
struct Node{
	Node* parent;
	State state;
	int no_function;

};

//Ket thuc khai bao
//In trang thai
void print_state(State s){
	printf("X: %d " ,s.x);
	printf("Y: %d \n" ,s.y);

}
//Kiem tra trang thai giong nhau
bool State_check(State a,State b)
{
	if (a.x==b.x && a.y==b.y)
	{
		return true;
	}
	return false;
}
//Kiem tra trang thai dich
bool Goal_check(State s,State Goal)
{
	if (State_check(s,Goal)) return true;
	else return false;
}
//Kiem tra duong di co hop le
bool check_position(int x,int y)
{
	if (x<0 || y<0) return false;
	if (x>ROW || y>COL) return false;
	if (maze[x][y]==0) return false;
	return true;
}
//Ham di chuyen len
bool up(State current_state,State *new_state)
{
	int xx=current_state.x-1;
	int yy=current_state.y;
	if (check_position(xx,yy))
	{
		new_state->x=xx;
		new_state->y=yy;
		return true;
	} else return false;
}
//Ham di chuyen xuong
bool down(State current_state,State *new_state)
{
	int xx=current_state.x+1;
	int yy=current_state.y;
	if (check_position(xx,yy))
	{
		new_state->x=xx;
		new_state->y=yy;
		return true;
	} else return false;
}
//Ham di chuyen trai
bool left(State current_state,State *new_state)
{
	int xx=current_state.x;
	int yy=current_state.y-1;
	if (check_position(xx,yy))
	{
		new_state->x=xx;
		new_state->y=yy;
		return true;
	} else return false;
}
//Ham di chuyen phai
bool right(State current_state,State *new_state)
{
	int xx=current_state.x;
	int yy=current_state.y+1;
	if (check_position(xx,yy))
	{
		new_state->x=xx;
		new_state->y=yy;
		return true;
	} else return false;
}
//Ham chon phep toan
bool call_operator(State s, State *out, int option){
	switch(option){
		case 1: return up(s,out);
		case 2: return down(s,out);
		case 3: return left(s,out);
		case 4: return right(s,out);
	}
}

int find_state_in_queue(State state, queue<Node*> q) {
	while(!q.empty()) {
		if(State_check(q.front()->state, state))
			return 1;
		q.pop();
	}
	return 0;
}


//duyet theo chieu rong
Node* BFS(State init_state, State goal_state){
		
	// Khai bao hai hang doi Open va Close
	queue<Node*> Open_BFS;
	queue<Node*> Close_BFS;
	int step = 0;
    // Tao nut trang thai cha
	Node* root = (Node*)malloc(sizeof(Node));
	root->state = init_state;
	root->parent = NULL;
	root->no_function = 0;
	Open_BFS.push(root);
	while(!Open_BFS.empty()){
		
		//printf("\n");
		//printf("\nOpen BFS: %d", Open_BFS.size());
		//printf("\nClose BFS: %d", Close_BFS.size());
		
		Node* node = Open_BFS.front();	// Lay ra gia tri BEN TRAI cua Open de kiem tra
		Open_BFS.pop();
		Close_BFS.push(node);
		
		// Kiem  tra xem dinh lay ra co phai la trang thai muc tieu
		if(State_check(node->state, goal_state))
		{
			//printf("\nTong so nut trong Open la: %d", Open_BFS.size());
			//printf("\nTong so nut trong Close la: %d", Close_BFS.size());
			return node;
		}
		// Goi cac phep toan tren trang thai
		int option;
		for(option=1; option<=4; option++) {
			State newstate;
			
			if(call_operator(node->state, &newstate, option)) {
				
				// Neu trang thai moi sinh ra da ton tai thi bo qua
				if(find_state_in_queue(newstate, Open_BFS) || find_state_in_queue(newstate, Close_BFS))
					continue;
					
				// Neu trang thai moi chua ton tai thi them vao hang doi
				//printf("\nTrang thai moi duoc dua vao hang doi OPEN\n");
				//print_state(newstate);
				Node *newNode = (Node*)malloc(sizeof(Node));
				newNode->state = newstate;
				newNode->parent = node;
				newNode->no_function = option;
				Open_BFS.push(newNode);
			}
		}
	}
	return NULL;
}
//In duong di
void print_node(Node *print)
{
	stack <Node*> stacks;
	while (print->parent!=NULL)
	{
		stacks.push(print);
		print=print->parent;
	}
	stacks.push(print);
	Node *find=new Node();
	int i=0;
	while (!stacks.empty())
	{		
		find=stacks.top();
		if (i!=0) cout<< action[find->no_function]<<endl;
		print_state(find->state);	
		stacks.pop();
		if (i==0) i++;
	}
}
int main()
{
	State Start_State,Goal_State;
	Start_State.x=0;
	Start_State.y=0;
	Goal_State.x=0;
	Goal_State.y=4;
	Node* printnode;
	cout<<"Trang thai dau la: "<<endl;
	print_state(Start_State);
	cout<<"Trang thai cuoi la: "<<endl;
	print_state(Goal_State);
	cout<<"Bat dau giai thuat BFS, co duong di nhu sau: "<<endl;
	printnode=BFS(Start_State,Goal_State);
	print_node(printnode);
	return 0;
}
