#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data; 
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
};

Node *findMiddle(Node *head) {
    Node* first = head;
    Node* second = head;

    if(head==NULL || head->next==NULL){
        return head;
    }
    
    while(second!=NULL && second->next!=NULL){
        second=second->next->next;
        first=first->next;
    } 
    return first;
}


// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?leftPanelTab=0