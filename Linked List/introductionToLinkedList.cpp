#include<bits/stdc++.h>
using namespace std;

class Node {
 
  public:
      int data;
      Node* next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node* next) : data(x), next(next) {}
 };


Node* constructLL(vector<int>& arr) {
    Node* head= NULL;
    Node* head1= NULL;
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        Node*temp = new Node(num);
        if(head==NULL){
            head=temp;
            head1=temp;
        }
        else{
            head->next=temp;
            head=head->next;
        }
    }
    return head1;
}

// TC = O(N)
// SC = O(1)

// Coding Ninjas Q Link - https://www.codingninjas.com/studio/problems/introduction-to-linked-list_8144737?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0