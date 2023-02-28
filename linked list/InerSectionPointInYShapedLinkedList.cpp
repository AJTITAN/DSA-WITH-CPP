//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
  Node* merge(Node* list1, Node* list2)  
{  
    if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        Node* temp = new Node(-1);
        Node* temp1 = list1;
        Node* temp2 = list2;
        Node* newhead = temp;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data<temp2->data){
                newhead->next = temp1;
                newhead = newhead->next;
                temp1 = temp1->next;
            }
            else{
                newhead->next = temp2;
                newhead = newhead->next;
                temp2 = temp2->next;
            }
        }
        while(temp1!=NULL){
            newhead->next = temp1;
                newhead = newhead->next;
                temp1 = temp1->next;
        }
        while(temp2!=NULL){
            newhead->next = temp2;
                newhead = newhead->next;
                temp2 = temp2->next;
        }
        return temp->next;
}
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* slow = head,*fast = head,*ptr;
        while(fast && fast->next){
            ptr = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ptr->next = NULL;
        Node* t1 = mergeSort(head);
        Node* t2 = mergeSort(slow);
        return merge(t1,t2);
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends