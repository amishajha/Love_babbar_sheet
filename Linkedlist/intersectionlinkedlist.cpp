
#include<iostream>
using namespace std;
// Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



int intersectPoint(Node* head1, Node* head2)
{


    Node* ptr1 = head1;
    Node* ptr2 = head2;

    int count1 = 0;
    int count2 = 0;
    while(ptr1!=NULL){
        count1++;
        ptr1=ptr1->next;
    }

    while(ptr2!=NULL){
        count2++;
        ptr2 = ptr2->next;


    }

  ptr1 = head1;
  ptr2 = head2;
    int diff = abs(count1-count2);
    if(count1>count2){
       for(int i = 0;i<diff;i++){
        ptr1 = ptr1->next;
       }
    }
    else if(count2>count1){
        for(int i = 0;i<diff;i++){
            ptr2 = ptr2->next;
        }
    }

    while(ptr1->next!=ptr2->next){
        ptr1=ptr1->next;
        ptr2=ptr2->next;

    }


if(ptr1)return ptr1->data;
return -1;

    










}