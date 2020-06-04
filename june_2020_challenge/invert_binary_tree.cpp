/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//     TreeNode* invertTreeHelper(TreeNode* root, TreeNode* left,TreeNode* right){
        
//     }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        else{
            TreeNode* temp;
            if(root->left){
                invertTree(root->left);
            }
            if(root->right){
                invertTree(root->right);
            }
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        return root;
    }
};