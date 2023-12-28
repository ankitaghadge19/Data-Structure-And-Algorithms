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

int intersectPoint(Node* head1, Node* head2)
{
    int cnt1 = 0, cnt2 = 0;
    
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while(temp1){
        cnt1++;
        temp1 = temp1->next;
    }
    
    while(temp2){
        cnt2++;
        temp2 = temp2->next;
    }
    
    int diff = abs(cnt1 - cnt2);
    temp1 = head1;
    temp2 = head2;
    
    if(cnt1 > cnt2){
        while(diff){
            temp1 = temp1->next;
            diff--;
        }
    }
    else if(cnt2 > cnt1){
        while(diff){
            temp2 = temp2->next;
            diff--;
        }
    }
    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1){
        return temp1->data;
    }
    return -1;
}

// TC = O(N+M)
// SC = O(1)

// GFG Q Link - https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1