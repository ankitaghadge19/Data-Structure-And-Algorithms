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

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if(head == NULL or head->next == NULL){
        return head;
    }
    
    Node* temp = head;
    while(temp->next){
        if(temp->data == temp->next->data){
            Node* curr = temp->next;
            temp->next = temp->next->next;
            delete curr;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/0