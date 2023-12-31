#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data;
        if(this-> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d ){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    // Inserting at first
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Inserting at last
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    if(head == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 8);
    insertAtTail(tail, 14);
    insertAtPosition(head, tail, 3, 12);
    insertAtPosition(head, tail, 1, 6);
    insertAtPosition(head, tail, 6, 16);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;
}