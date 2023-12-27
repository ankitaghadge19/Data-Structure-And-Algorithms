#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};

class Solution {
public:
    // Function to sort the given linked list using Merge Sort.
    Node* findMid(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }
        Node* ans = new Node(-1);
        Node* temp = ans;

        // merge 2 sorted linked lists
        while (left != NULL && right != NULL) {
            if (left->data < right->data) {
                temp->next = left;
                temp = temp->next;
                left = left->next;
            } else {
                temp->next = right;
                temp = temp->next;
                right = right->next;
            }
        }

        while (left != NULL) {
            temp->next = left;
            temp = temp->next;
            left = left->next;
        }

        while (right != NULL) {
            temp->next = right;
            temp = temp->next;
            right = right->next;
        }

        ans = ans->next;
        return ans;
    }

    Node* mergeSort(Node* head) {
        // base case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // find mid, break linked list into two halves
        Node* mid = findMid(head);

        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL;

        // Recursive call to sort both halves
        left = mergeSort(left);
        right = mergeSort(right);

        // Merge both left and right halves
        Node* result = merge(left, right);

        return result;
    }
};

// TC = O(N*Log(N))
// SC = O(N)

// GFG Q Link - https://www.geeksforgeeks.org/problems/sort-a-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article