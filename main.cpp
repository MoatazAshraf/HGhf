#include <iostream>
#include"Stack.cpp"
using namespace std;

int main()
{
    Stack s;
    int e=-1 , g ,t;
    while (e != 0)
    {
    cout<<"For push press 1 , For pop press 2 , For display press 3"<<endl;
    cin>>e;
    switch (e)
    {
    case 1:
        cout<<"Enter an integer "<<endl;
         cin>>g;
         s.push(g);
         cout<<g<<" is pushed successfully"<<endl;
         break;
    case 2:
       t=s.pop();
       if (t==NULL)
        cout<<"Stack is empty"<<endl;
       else
        cout<<t<<" is popped successfully"<<endl;
       break;
        case 3:
            s.display();
            cout<<endl;
            break;
        }

    }


    return 0;
}
