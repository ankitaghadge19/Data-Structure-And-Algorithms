#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        Node* curr = *head;
        while(curr){
            if(curr->data == x){
                if(curr == *head){
                    *head = curr->next;
                }
                Node* nextNode = curr->next;
                Node* prevNode = curr->prev;
                
                if(nextNode){
                    nextNode->prev = prevNode;
                }
                if(prevNode){
                    prevNode->next = nextNode;
                }
                curr = nextNode;;
            }
            else{
                curr = curr->next;
            }
        }
    }
};

// TC = O(N).
// SC = O(1)

// Coding Ninjas Q Link - https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1