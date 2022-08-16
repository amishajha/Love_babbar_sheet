#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node* merge(Node* a,Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
	Node* result;
	if(a->data<b->data){
		result = a;
		result->bottom = merge(a->bottom,b);

	}
	else {
		result=b;
		result->bottom = merge(a,b->bottom);

	}

	result->next = NULL;
	return result;

    
}

Node* flatten(Node *root){
    if(root==NULL or root->next==NULL)
        return root;

    return merge(root,flatten(root->next));

}



//timecomplexity-O(n*m)
// space complexity - o(1)












