#include<iostream>
using namespace std;

int stack[5],top=-1,maxsize=5,x;

void push()
{
    if(top==maxsize-1)
    {
        cout<<"stack is full";
    }
    else
    {
        cout<<"Enter the elements of array:";
        cin>>x;
        top++;
        stack[top]=x;
    }
}
    void pop()
    {
        if(top==-1)
        {
            cout<<"Array is Empty"<<endl;
        }
        else
        {
            cout<<stack[top];
            top--;
            cout<<"\n";
        }
    }
    void display()
    {
        int i;
        for(i=0;i<=top;i++)
        {
            cout<<stack[i]<<endl;
        }
    }
    int main()
    {
        push();
        push();
        push();
        push();
        push();

        pop();
        pop();
        pop();
        pop();
        pop();

        push();
        push();
        push();
        push();

        display();




    }
