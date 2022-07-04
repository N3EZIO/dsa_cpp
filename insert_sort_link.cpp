/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* insertionSortList(listnode* A) {
    
    listnode* head = A;
    listnode* sub_1 =A;
    listnode* sub_2 = A;
    listnode* temp = A;
    listnode* traverse = NULL;
    int tempo;
    
    // while(temp != NULL){
    //     if(temp->val > temp->next-val){
    //         while(traverse != sub_2->next){
                
    //             traverse = sub_1;
    //             if(traverse->val > temp->next->val){
                    
    //             }
                
    //             tempo = temp->val;
    //             temp->val = temp->next->val;
    //             temp->next->val = tempo;
    //             sub_2 = temp->next;
                
    //         }
            
    //     }
        
    //     temp = temp->next;
    // }
    temp = temp->next;
    
    while(temp != NULL){
        if(temp->val < head){
            
            // listnode* dummy = listnode_new(temp->val);
            // dummy->next = head;
            // head->next = temp->next;
            // head = dummy;
            // sub_1 = head;
            sub_2->next = temp->next;
            temp->next = head;
            head = temp;
                
        }
        else{
            if(temp->val < sub_2->val){
                traverse = head;
                while(traverse!=sub_2->next){
                    if(traverse->val <= temp->val && traverse->next->val > temp->val){
                        // listnode* dummy = listnode_new(temp-<val);
                        // dummy->next = traverse->next->next;
                        // traverse->next = dummy;
                        // sub_2->next = temp->next->next;
                        sub_2->next = temp->next;
                        temp->next = traverse->next;
                        traverse->next = temp;
                    }
                    else{
                        traverse = traverse->next;
                    }
                }
            }
            else{
                sub_2 = sub_2->next;
            }
        }
        temp = sub_2->next;
    }
    
    return head;
}



//wrong output coming