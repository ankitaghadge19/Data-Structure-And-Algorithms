#include<bits/stdc++.h>
using namespace std;

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

Node* reverseLinkedList(Node *head)
{
    if(head==NULL and head->next==NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

// TC = O(n)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/reverse-linked-list_920513?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM