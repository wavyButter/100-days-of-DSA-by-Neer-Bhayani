#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node * next;
    
};

void linkedlisttraversal(struct Node* ptr){
    while(ptr != NULL)
    {
       printf("%d\n", ptr->data);
       ptr = ptr->next;
    }
}

struct Node * insertatfirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}


struct Node * insertatindex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i!=index - 1)
    {
        p = p-> next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct Node * insertatend(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}


struct Node * insertafter(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;


    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    

    
    head = (struct Node *) malloc(sizeof(struct Node));
    second =  (struct Node *) malloc(sizeof(struct Node));
    third =  (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    

    
    head->data = 7;
    head->next = second;

    
    second->data = 11;
    second->next = third;
    

    
    third->data = 22;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL;


    
    head = insertatfirst(head, 68);
    head = insertatindex(head, 69, 1);
    head = insertatend(head, 68);
    head = insertafter(head, second, 68);
    linkedlisttraversal(head);
    



    return 0;
}
