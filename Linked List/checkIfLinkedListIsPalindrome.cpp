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
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        if(head == NULL and head->next == NULL){
            return true;
        }
        
        //step 1 -> Find mid element
        Node* mid = getMid(head);
        
        //step 2 -> reverse list after middle
        Node* temp = mid->next;
        mid->next = reverse(temp);
        
        //step 3 -> compare both halves
        Node* head1 = head;
        Node* head2 = mid->next;
        
        while(head2 != NULL){
            if(head1->data != head2->data){
                return 0;
            }
            
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //step 4 -> repeat step 2
        temp = mid->next;
        mid->next = reverse(temp);
        
        return 1;
    }
};