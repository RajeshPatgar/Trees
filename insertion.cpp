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
// Function to insert a value into the BST
    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->value) {
            node->left = insert(node->left, value);
        } else if (value > node->value) {
            node->right = insert(node->right, value);
        }

        return node;
    }