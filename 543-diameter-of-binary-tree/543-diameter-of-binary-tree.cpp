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
    int ans(TreeNode* root, int &maxi){
        if(!root){
            return 0;
        }
        int lh = ans(root->left,maxi);
        int rh = ans(root->right,maxi);
        maxi = max(maxi,lh+rh);
        return max(lh,rh)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int maxi = 0;
        ans(root,maxi);
        return maxi;
    }
};