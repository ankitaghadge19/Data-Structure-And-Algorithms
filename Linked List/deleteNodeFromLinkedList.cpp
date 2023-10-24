#include<bits/stdc++.h>
using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

Node *deleteNode(Node *head, int pos)
{
	if(head==NULL){
		return head;
	}
	if(pos==0){
		return head->next;
	}
	Node* temp=head;
	Node* prev;
	int cnt=1;
	for(int i=0; i<pos; i++){
		prev = temp;
		temp=temp->next;
		// if pos >= length of LL. pos should be 0 to length of LL
		if(temp==NULL){
			return head;
		}
	}
	prev->next=temp->next;
	return head;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/delete-node-in-ll_5881?leftPanelTab=0