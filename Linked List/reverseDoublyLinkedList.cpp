#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Node* reverseDLL(Node* head)
{   
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// TC = O(n)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/reverse-a-doubly-linked-list_1116098?leftPanelTab=0
// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article