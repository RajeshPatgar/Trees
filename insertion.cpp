#include<bits/stdc++.h>
class TreeNode{
    public: int value;
            TreeNode* left;
            TreeNode *right;

            TreeNode(int val){
                value=val;
                left=nullptr;
                right=nullptr;
            }
};
TreeNode* insert(TreeNode* root, int key) {
    if(root==nullptr) return new TreeNode(key);

    TreeNode* cur=root;
    while(true){
        if(cur->value<=key){  //move right
           if(cur->right!=nullptr) cur=cur->right;
           else{
            cur->right=new TreeNode(key);break;
           }
        }
        else{ //move left
           if(cur->left!=nullptr) cur=cur->left;
           else{
            cur->left=new TreeNode(key);break;
           }
        }
    }
    return root;  
}