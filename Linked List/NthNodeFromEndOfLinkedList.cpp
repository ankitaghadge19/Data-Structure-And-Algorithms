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

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           Node* temp = head;
           int cnt = 1;
           while(temp!= NULL and cnt < n){
               temp = temp->next;
               cnt++;
           }
           
           if (temp == NULL) {
               return -1;
           }
           
           Node* head1 = head;
           Node* head2 = temp;
           
           while(head2->next != NULL){
               head1 = head1->next;
               head2 = head2->next;
           }
           return head1->data;
    }
};

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article