#include <iostream>
using namespace std;

// using arrays
class stkimpArray{
    int top = -1;
    int st[10];

    void push(int val){
        if(top > 10){
            cout<<"Size exceeded"<<endl;
        }

        top++;
        st[top]=val;
    }
    
    int top(){
        if(top == -1) cout<<"stack empty"<<endl;
        return st[top];
    }

    void pop(){
        if(top == -1) cout<<"stack empty"<<endl;
        top--;
    }

    int size(){
        return top+1;
    }
};

int main(){

    return 0;
}