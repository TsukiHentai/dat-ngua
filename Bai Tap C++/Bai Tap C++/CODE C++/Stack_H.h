#ifndef Stack_H
#define Stack_H
class Stack {
// LIFO objects
   public:
      Stack(int MaxStackSize = 100);
      ~Stack() {delete [] stack;}
      bool IsEmpty() const {return top == -1;}
      bool IsFull() const {return top == maxTop;}
      int Top() const;
      void Push(const int & x);
      int Pop();
   private:
      int top;    
      int maxTop; 
      int *stack;
};
#endif
