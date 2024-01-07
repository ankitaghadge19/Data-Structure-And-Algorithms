#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

class Solution
{
public:

    Node * removeDuplicates(struct Node *root)
    {
        Node* head = root;
        if(!head or !head->next){
            return NULL;
        }
        while(head->next){
            if(head->data == head->next->data){
                head->next = head->next->next;
                if(head->next){
                    head->next->prev=head;
                }
            }
            else{
                head = head->next;
            }
        }
        return root;
    }
};

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1