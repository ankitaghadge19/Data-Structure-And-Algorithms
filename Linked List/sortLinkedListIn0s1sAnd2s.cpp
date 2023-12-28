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

class Solution
{
    public:   
    Node* segregate(Node *head) {
        
        if(head==NULL||head->next==NULL){
            return head;
        }
        
        Node* temp = head;
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        while(temp){
            if(temp->data == 0){
                cnt0++;
            }
            if(temp->data == 1){
                cnt1++;
            }
            if(temp->data == 2){
                cnt2++;
            }
            temp = temp->next;
        }
        
        temp = head;
        while(cnt0){
            temp->data = 0;
            temp = temp->next;
            cnt0--;
        }
        while(cnt1){
            temp->data = 1;
            temp = temp->next;
            cnt1--;
        }
        while(cnt2){
            temp->data = 2;
            temp = temp->next;
            cnt2--;
        }
        return head;
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1