#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    
    Node* reverse(Node* head){
        if (head == NULL) {
        return NULL;
    }
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* revFirst = reverse(first);
        Node* revSecond = reverse(second);
        
        int s = 0;
        int c = 0;
        Node* ansHead = NULL;
        Node* curr = NULL;
        Node* temp;
        
        while(revFirst or revSecond){
            s = (revFirst ? revFirst->data : 0) +
                (revSecond ? revSecond->data : 0) + c;
            c = (s >= 10) ? 1 : 0;
            s = s % 10;
            
            temp = new Node(s);
            if(ansHead == NULL){
                ansHead = temp;
                curr=temp;
            }
            else{
                curr->next = temp;
                curr = temp;
            }
            if(revFirst){
                revFirst = revFirst->next;
            }
            if(revSecond){
                revSecond = revSecond->next;
            }
        }
        if(c>0){
            temp = new Node(c);
            curr->next = temp;
            curr = temp;
        }
        ansHead = reverse(ansHead);
        return ansHead;
    }
};

// TC = O(N+M)
// SC = O(Max(N,M)) for the resultant list

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1