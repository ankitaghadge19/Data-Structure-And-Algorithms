#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:
        int *arr;
        int top;
        int size;

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element) {
        if(top<=size-2) {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow!" << endl;
        }
    }

    void pop() {
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow!" << endl;
        }
    }

    int peek() {
        if(top >=0 )
            return arr[top];
        else
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};


int main() {


    Stack st(3);

    st.push(3);
    st.push(2);
    st.push(1);
    
    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty!" << endl;
    }
    else{
        cout << "Stack is not Empty!" << endl;
    }

    return 0;
}