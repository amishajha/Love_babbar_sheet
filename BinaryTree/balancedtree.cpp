// //height of the left subtree and the height of the right subtree (difference ) should be less than and equal to 1

// #include<iostream>
// using namespace std;

//  struct Node{
//      int data;
//     struct Node* left;
//     struct Node* right;
//  }
// //  int f  = 1;
//  int solve(Node* root){
     
//      if(!root)return 0;
//      int lh =  solve(root->left);
//      int rh = solve(root->right);
//      if(abs(lh-rh)>1) f=0;
//      return max(lh,rh)+1;
     
     
//  }

// class Solution{
//     public:

    
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
    
    
//     {
//         f=1;
//         solve(root);
//         return f;
//     }
// };