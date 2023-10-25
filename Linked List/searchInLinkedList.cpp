#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
};

int searchInLinkedList(Node<int> *head, int k) {
    while(head!=NULL){
        if(head->data==k){
            return 1;
        }
        else{
            head=head->next;
        }
    }
    return 0;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/search-in-a-linked-list_975381?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0