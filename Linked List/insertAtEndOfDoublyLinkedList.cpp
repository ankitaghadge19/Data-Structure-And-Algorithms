#include<bits/stdc++.h>
using namespace std;

struct Node {
      int value;
      Node *prev;
      Node *next;
      Node() : value(0), prev(nullptr), next(nullptr) {}
      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 };

Node * insertAtTail(Node *head, int k) {
    Node* newNode = new Node(k);
    if(head==NULL){
        head = newNode;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// TC = O(1)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/insert-at-end-of-doubly-linked-list_8160464?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0