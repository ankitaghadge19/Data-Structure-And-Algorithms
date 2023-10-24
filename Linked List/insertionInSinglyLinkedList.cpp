#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

Node * insert(Node * head, int n, int pos, int val) {

   if(pos==0){
       Node* temp=new Node(val);
       temp->next = head;
       head=temp;
       return head;
   }
   int m=1;
   Node* tempHead=head;
   Node* newNode=new Node(val);
   while(m<pos){
       tempHead=tempHead->next;
       m++;
   }
   Node* temp= tempHead->next;
   tempHead->next = newNode;
   newNode->next = temp;
   return head;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/insertion-in-a-singly-linked-list_4609646?leftPanelTab=0