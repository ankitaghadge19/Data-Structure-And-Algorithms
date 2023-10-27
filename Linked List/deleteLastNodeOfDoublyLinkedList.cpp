#include<bits/stdc++.h>
using namespace std;

struct Node {
      int data;
      Node *prev;
      Node *next;
      Node() : data(0), prev(nullptr), next(nullptr) {}
      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 };

Node * deleteLastNode(Node *head) {
    if(head->next == NULL){
        head = NULL;
        return head;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}


// TC = O(1)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/delete-last-node-of-a-doubly-linked-list_8160469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0