#include<bits/stdc++.h>
using namespace std;
#include<queue>

int main(){
    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"Doubly Ended Q is Empty!"<<endl;
    }
    else{
        cout<<"Queue is Not Empty!"<<endl;
    }

}