#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    cout<<"Top element of Q: "<<q.front()<<endl;

    cout<<"Size of Q is: "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    if(q.empty()){
        cout<<"Q is empty!";
    }
    else{
        cout<<"Q is not empty!";
    }

    return 0;
}