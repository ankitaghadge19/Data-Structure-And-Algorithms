#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* deleteNode(Node *head,int x)
{
    Node* temp = head;
    int i = 1;
    
    if(i == x){
        return head->next;
    }
    
    while(temp!=NULL and temp->next!=NULL){
        if((i+1) == x){
            temp->next = temp->next->next;
        }
        i++;
        temp = temp->next;
    }
    
    return head;
}

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1