#include <iostream>
using namespace std;
  
/* Link list node */
struct Node {
    int data;
    struct Node* next;
};


Node* removelastNode(Node* head){
    if(head==NULL )
    return NULL;
    if(head->next==NULL){

        delete head;
        return NULL;

    }

    //find the second last node
    Node* secondlast = head;
    while(secondlast->next->next!=NULL){

        secondlast = secondlast->next->next;


    }
    delete(secondlast->next);
    secondlast->next = NULL;
    return head;
    

}