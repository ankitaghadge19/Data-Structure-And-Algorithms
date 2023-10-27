#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }  
};

class Solution{
    public:
    Node* deleteNode(Node *head, int x){
        if(x==0 and head==NULL){
            return head;
        }
        if (x == 1) {
            // If we want to delete the head node.
            Node* newHead = head->next;
            if (newHead != NULL) {
                newHead->prev = NULL;
            }
            delete head;
            return newHead;
        }
        Node* currNode = head;
        for (int i = 1; i < x && currNode; i++) {
            currNode = currNode->next;
        }
        if (currNode == NULL) {
            // If x is out of bounds, do nothing.
            return head;
        }
        Node* prevNode = currNode->prev;
        Node* nextNode = currNode->next;

        if (prevNode) {
            prevNode->next = nextNode;
        }
        if (nextNode) {
            nextNode->prev = prevNode;
        }
        delete currNode;
        return head;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1