#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* deleteMid(Node* head)
{
    if(!head || !head->next){
        return NULL;
    }
    
    Node* slow = head;
    Node* prev = NULL;
    Node* fast = head;
    
    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    prev->next = slow->next;
    return head;
}


// TC = O(N)
// SC = O(1)

// GFG Q Link - https://www.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article