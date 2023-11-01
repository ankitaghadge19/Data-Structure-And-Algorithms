#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
       Node *next;
 
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
};

int lengthOfLoop(Node *head) {
    if (head==NULL || head->next==NULL) {
        return 0;  // Return 0 if there's no loop
    }
        
    Node *slow = head, *fast = head;
    bool loopExists = false;

    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) 
        {
            loopExists = true;
            break;
        }
    }

    if (!loopExists){
        return 0;  // Return 0 if there's no loop
    } 

    int length = 1;
    fast = fast->next;  // Move fast pointer one step forward

    while (slow != fast) 
    {
        fast = fast->next;
        length++;
    }

    return length;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM