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
    int len(TreeNode* r){
        if(!r){
            return 0;
        }
        return max(len(r->left),len(r->right))+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int lh = len(root->left);
        int rh = len(root->right);
        return (abs(lh-rh)<=1)&&(isBalanced(root->left))&&(isBalanced(root->right));
        
    }
};