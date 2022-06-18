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
        int lval = max(0,ans(root->left,maxi));
        int rval = max(0,ans(root->right,maxi));
        maxi = max(maxi,lval+rval+root->val);
        return max(lval,rval)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int maxi = INT_MIN;
        ans(root,maxi);
        return maxi;
    }
};