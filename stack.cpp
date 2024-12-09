#include<iostream>
using namespace std;

int stack[10],maxsize=10,top=-1,x;

bool isfull()
{
    if(top==maxsize-1)
        return true;
    else
        return false;
}

bool isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void push(int x)
{
    if( isfull() )
    {
        cout<<"Stack is full \n";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if ( isempty() )
    {
        cout<<"stack is empty \n";
    }
    else
    {
        cout<<stack[top]<<",";
        top--;
    }
}

void show()
{
    for (int i=0;i<=top;i++)
    {
        cout<<stack[i]<<",";
    }
    cout<<endl;
}

int main()
{
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);


    pop();
    pop();
    pop();
    pop();


    show();
}
