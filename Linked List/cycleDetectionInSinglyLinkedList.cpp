#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>;

class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

//Solution-1
/*
bool detectCycle(Node *head)
{
    unordered_map<int, int> mp;
    if(head==NULL || head->next==NULL){
        return 0;
    }
    Node* temp = head;
    while(temp!=NULL){
        int n = temp->data;
        if(mp[n]){
            return 1;
        }
        mp[n]++;
        temp=temp->next;
    }
    return 0; 
}
*/

//Solution-2
bool detectCycle(Node *head)
{
    unordered_map<Node*, bool> vis;
    if(head==NULL || head->next==NULL){
        return false;
    }
    Node* temp = head;
    while(temp!=NULL){
        if(vis[temp]){
            return true;
        }
        vis[temp]=true;
        temp=temp->next;
    }
    return false; 
}


// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/cycle-detection-in-a-singly-linked-list_628974?leftPanelTab=0