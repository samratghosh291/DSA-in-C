#include<iostream>
using namespace std;


class Stack{

    private:
    int capacity;
    int * arr;
    int top;

    public:
    Stack(int c){
        this->capacity=c;
        arr=new int[capacity];
        top=-1;
    }

    void push(int val){

        if(top==(capacity-1)){
            cout<<"Overflow!!";
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Underflow!!";
            return;
        }
        top--;
    }

    int getTop(){
        if(top==-1){
            cout<<"Underflow!!";
            return;
        }
        return arr[top--];

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    int size(){
        return (top+1);
    }

    bool isFull(){
        if(top==(capacity-1)){
            return true;
        }
        return false;
    }
};


int main(){
    Stack st(3);
    st.push(20);
    st.push(40);
    st.push(30);
    cout<<st.isFull();
    st.pop();









    return 0;
}