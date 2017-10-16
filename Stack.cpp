#include "Stack.h"
#include <cstddef>
#include<iostream>
using namespace std;
Stack::Stack()
{
    top=NULL;
}
bool Stack::isStackFull()
{
    return false;
}
bool Stack::isStackEmpty()
{
    if (top==NULL)
        return true;
    else
        return false;
}
void Stack::push(int y)
{
    node*p=new node;
    p->e=y;
    p->next=top;
    top=p;
}
int Stack::pop()
{
    if (!isStackEmpty()){
    int x;
    node*p=top;
    x=p->e;
    top=top->next;
    delete p;
    return x;
    }
    else
        return NULL;

}
Stack::~Stack()
{
    node*p=top;
    while(top!= NULL)
    {
        top=top->next;
        delete p;
        p=top;
    }
}
void Stack ::display()
{
    while (top != NULL)
        cout<<pop()<<" ";

}

