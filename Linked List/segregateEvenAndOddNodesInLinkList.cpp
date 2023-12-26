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
    Node* divide(int N, Node *head){
        
        if(head==NULL and head->next==NULL){
            return head;
        }
        
        Node* even = NULL;
        Node* odd = NULL;
        
        Node* e = NULL;
        Node* o = NULL;
        
        Node* temp=head;
        
        while(temp){
            int data = temp->data;
            if(data%2 == 0){
                if(e == NULL){
                    even = temp;
                    e = temp;
                }
                else{
                    even->next = temp;
                    even = even->next;
                }
            }
            else{
                if(o == NULL){
                    odd = temp;
                    o = temp; 
                }
                else{
                    odd->next = temp;
                    odd = odd->next;
                }
            }
            temp=temp->next;
        }
        if(e){
            even->next=o;
        }
        if(o){
            odd->next=NULL;
        }
        if(e){
          return e;  
        }
        return o;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://www.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1