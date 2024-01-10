#include<bits/stdc++.h>
using namespace std;

struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;

class Solution
{
    public:
    
    struct node *reverseIt(struct node *head, int k)
    { 
        node* forward = NULL;
        node* curr = head;
        node* prev = NULL;
        int cnt = 0;
        
        while(curr and cnt<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        if(forward != NULL){
            head->next = reverseIt(forward, k);
        }
        return prev;
    }
};

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1