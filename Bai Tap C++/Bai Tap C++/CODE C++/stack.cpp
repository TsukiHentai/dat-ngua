#include <iostream >
using namespace std;

class IntStack {
public:
   IntStack(int num) {
       top = 0;
       maxelem = num;
       s = new int[maxelem];
    }

   void  push(int t) {
      if (top == maxelem) return;
      s[top++] = t;
   }

   int pop() {
      if (top == 0) return -1;
      return s[--top];
   }

   void display() {
     if (top == 0) {
        cout << "(empty)\n";
        return;
     }
     cout << pop();
   }
   int   empty()  {
       return top == 0;
    }
private:
   int *s;
   int top;
   int maxelem;
};

int main() {
   IntStack *s = new IntStack(100);

   int n, r;
	cout << "Nhap vao so can doi n = ";
	cin >> n;

	while (n != 0 ) {
	   	r = n % 2;
	   	s->push(r);
	   	n = n / 2;
	}

	cout << "So nhi phan:";
	while (!s->empty()){
		s->display();
	}

   return 0;
}

