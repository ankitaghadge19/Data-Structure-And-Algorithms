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

class Solution
{
public:
    Node *rev(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *forward = NULL;

        while (curr)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    Node *addOne(Node *head)
    {
        Node *revHead = rev(head);
        Node *temp = revHead;
        bool f = true;

        while (temp != NULL && f == true)
        {
            if (temp->data == 9 && temp->next == NULL)
            {
                temp->data = 1;
                Node *newHead = new Node(0);
                newHead->next = revHead;
                revHead = newHead;
                temp=temp->next;
            }
            else if (temp->data == 9)
            {
                temp->data = 0;
                temp = temp->next;
            }
            else
            {
                temp->data = temp->data + 1;
                temp = temp->next;
                f = false;
            }
        }
        head = rev(revHead); 
        return head;         
    }
};

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1