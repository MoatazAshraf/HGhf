#ifndef Stack_H
#define Stack_H

struct node{int e ; node*next;};
class Stack
{
    public:
        Stack();
        ~Stack();
         void push(int e);
         int pop();
         bool isStackFull();
         bool isStackEmpty();
          void display();

    private:
        node*top;
};

#endif // Stack_H
