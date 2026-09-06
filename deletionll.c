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

// case 1:
struct Node * deletefirst(struct Node * head){
  struct Node * ptr = head;
  head = head->next;
  free(ptr);
  return head;
}

// case 2 :
struct Node * deleteatindex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

// case 3:
struct Node * deletelast(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// case 4:
struct Node * deletenum(struct Node * head, int value){
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q-> data == value){
        p->next = q->next;
        free(q);
    }
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
    

    
    head->data = 4;
    head->next = second;

    
    second->data = 3;
    second->next = third;
    

    
    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;


    printf("ll before: ");
    linkedlisttraversal(head);

    //head = deletefirst(head);
    //head = deleteatindex(head, 2);
    //head = deletelast(head);
    head = deletenum(head,3); 
    printf("ll after: ");
    linkedlisttraversal(head);
    
    



    return 0;
}
