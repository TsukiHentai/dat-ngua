#ifndef Stack_H
#define Stack_H
class Stack {
// LIFO objects
   public:
      Stack(int MaxStackSize = 10);
      ~Stack() {delete [] stack;}
      bool IsEmpty() const {return top == -1;}
      bool IsFull() const {return top == MaxTop;}
      int Pop() const;
      void Push(const int & x);
      int Top();
   private:
      int top;    
      int MaxTop;
      int *stack;
};
#endif

