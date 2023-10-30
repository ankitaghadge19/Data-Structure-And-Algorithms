#include<bits/stdc++.h>
using namespace std;

struct Node
{
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
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        unordered_map<Node*, bool> vis;
        Node* temp = head;
        while(temp!=NULL){
            if(vis[temp]){
                return temp->data;
            }
            vis[temp]=true;
            temp=temp->next;
        }
        return -1;
    }
};


// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://practice.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1