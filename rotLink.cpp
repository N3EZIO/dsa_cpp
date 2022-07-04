
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* rotateRight(ListNode* A, int B) {
    ListNode* head = A;
    // ListNode* tail = A;
    ListNode* temp = A; 
    int prev_val = A->val;
    int temporary = 0;

    // while(1){
    //     if(tail->next == NULL){
    //         break;
    //     }
    //     else{
    //         tail = tail->next;
    //     }
    // }

    int i;
    for(i=0;i<B;i++){
        while(1){
           if(temp->next != NULL){
                temp = temp->next;
                cout<<"the current value is:"<<temp->val<<"\n";
                temporary = temp->val;
                temp->val = prev_val;
                prev_val = temp->next->val;
           }else{
               temp = head;
               temp->val = prev_val;
               break;
           }  
        }
    }
    cout<<"the current head position is: "<<head->val;
    return head;
}

int main(){
    ListNode* head=new ListNode() ;
    ListNode* temp=NULL;
    
    head->val = 1;
    temp = new ListNode();
    temp->val = 2;
    head->next = temp;
    temp1 = new ListNode();
    temp1->val = 3;
    temp->next = temp1;
    
    rotateRight(head, 2);
}






/*

81 23 57 65 90 56 69 77 52 71 74 15 25 41 17 76 95 58 38 29 68 4 89 55 99 13 92 98 62 36 59 54 48 53 12 11 6 2 35 46 39 20 27 44 78 82 67 91 64 97 43 84 83 70 73 79 88 16 1 96 66 80 72 10 19 100 33 75 3 81 24 22 87 63 9 7 40 8 34 101 60 28
20


*/