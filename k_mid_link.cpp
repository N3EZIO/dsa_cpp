#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
 
/* Given a reference (pointer to 
   pointer) to the head of a list
   and an int, push a new node on
   the front of the list. */
void push(struct Node** head_ref,
          int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
int solve(Node* A, int B) {

    int i;
    Node* head = A;
    Node* mid = NULL;
    Node* temp = A;
    int len;
    len = 0;

    while(temp->next !=NULL){
        temp = temp->next;
        len++;
    }
    len++;
    cout<<"calculated length";
    temp = head;
    for(i=0;i<=len/2;i++){
        temp = temp->next;
    }
    mid = temp;

    // Node* prev;
    // Node* curr;
    // Node* next;
    // prev = NULL;
    // curr = A;
    // next = A;

    // while(curr != NULL){
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }

    // cout<<"reversed ll";
    // head = prev;
    // temp = mid;

    int m = len/2 + 1;
    m = m - B;


    for(i=0;i<m;i++){
        temp = temp->next;
    }

    return temp->data;

}

int main(){
    struct Node* head = NULL;
    int k = 2;
 
    // create linked 
    // 1->2->3->4->5->6->7
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    return 0;

    cout<<solve(head, 2);

    return 0;
}