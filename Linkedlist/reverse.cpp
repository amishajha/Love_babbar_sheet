
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* curr = head;
        Node*next;
        Node*prev=NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
            
            
        }
        
    return prev;
        
        
        
    }
    
};




//timecomplexity -O(n)
//space complexity -o(1)

