#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next, *prev;
   Node() : data(0), next(nullptr), prev(nullptr) {}
   Node(int x) : data(x), next(nullptr), prev(nullptr) {}
   Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
};

Node* constructDLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* curr = head;
    Node* prev = NULL;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        temp->prev = curr;
        curr->next = temp;
        curr = curr->next;
    }  
    return head;
}


// TC = O(N)
// SC = O(n)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/introduction-to-doubly-linked-list_8160413?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0