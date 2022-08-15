#include<iostream>
using namespace std;

class BST {
    int data;
    BST *left,*right;
    public:
BST();//Default constructor
BST(int); //parameterized constructor
BST* Insert(BST*,int); //insert function



};



BST* BST :: Insert(BST* root,int value){

     if(!root)
     {
        return new BST(value);

     }

     if(value > root->data){

        root->right =Insert(root->right,value);



     }


     else if(value<root->data){
        root->left = Insert(root->left,value);
     }


     return root;




}
int main()

{

       BST b,*root = NULL;
       root = b.Insert(root,50);
       b.Insert(root,30);







}

