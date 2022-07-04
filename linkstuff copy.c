#include<stdio.h>
#include<stdlib.h>

struct Node {
    char data;
    struct Node* next;
}*stnode;

// void createList() {
//     struct Node *temp, *fnNode;
//     int n = 1;
//     char input;
    
    
//         while(1){

        
//                 printf("enter character to be inserted\n");
//                 // scanf("%c", &input);
//                 input = getchar();
//                 if(input == '0'){
//                 printf("quitting\n");
//                 return;
//                 }
//                 stnode = (struct Node*)malloc(sizeof(struct Node));
//                 if(stnode == NULL) {printf("memory full"); break;}
//                 stnode->data = input;
//                 stnode->next = NULL;
//                 temp = stnode;
//                 printf("inserted %c\n",stnode->data);
//                 for(n=2; input!=0; n++){
//                     printf("enter character to be inserted\n");
//                 // scanf("%c", &input);
//                     input = getchar();
//                     if(input == '0'){
//                     printf("quitting\n");
//                     break;
//                     }
//                     fnNode = (struct Node*)malloc(sizeof(struct Node));
//                     if(fnNode == NULL){
//                         printf("memory can't be allocated");
//                     }
//                     else{
//                         fnNode-> data = input;
//                         fnNode->next = NULL;
//                         printf("inserted %c\n",fnNode->data);
//                         temp->next = fnNode;
//                         temp = temp->next;
//                     }
//                 }
                
                
            

//         }
    
// }

void createList()
{
    struct Node *newNode, *temp;
    char data;
    int i;
    
    stnode = (struct Node *)malloc(sizeof(struct Node));

    if(stnode == NULL){
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%c", &data);

        stnode->data = data;
        stnode->next = NULL;

        temp = stnode;

        for(i=2; data!='0'; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%c", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}



void printList (){
    struct Node *temp;

    if(stnode == NULL){
        printf("empty list");
    }
    else{

        temp = stnode;
        while(temp != NULL){

            printf("data = %c \n",temp->data);
            temp = temp->next;
        }
    }
}


void reverseList()
{
    struct Node *prevNode, *curNode;

    if(stnode != NULL)
    {
        prevNode = stnode;
        curNode = stnode->next;
        stnode = stnode->next;

        prevNode->next = NULL;

        while(stnode != NULL)
        {
            stnode = stnode->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = stnode;
        }

        stnode = prevNode;

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}


int main() {

    printf("hello \n");

    createList();
    printList();
    reverseList();
    printList();
    return 0;
}