#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

   int getMiddle(Node *head)
    {
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast and fast->next){
            slow=slow->next;
            fast = fast->next->next;
            
        }
        
        return slow->data;
        
        
        
        
    }