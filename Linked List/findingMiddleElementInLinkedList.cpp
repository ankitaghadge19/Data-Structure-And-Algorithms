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
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* slow=head;
        Node* fast=head;
        
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// Soln Link -  https://www.youtube.com/watch?v=4JXC2Iq8T3c