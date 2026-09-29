#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1; 
    }

    void push(int x){
        if(top >= MAX-1){
            cout<<"stack overflow"<<endl;
        }

        arr[++top] = x;
        cout<<x<<"pushed";
    }

    void pop(){
        if(top == -1){
            cout<<"stack empty";
            return -1;
        }

        return arr[top];
    }

    bool isempty(){
        return top < 0;
    }

    void peek(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return ;
        }

        cout<<arr[top]<<endl;
    }
}