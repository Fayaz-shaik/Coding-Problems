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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){return ans;}
        queue<TreeNode*> qq;
        qq.push(root);
        while(!qq.empty()){
            int s = qq.size();
            vector<int> each;
            for(int i = 0; i<s;i++){
                
                TreeNode* p = qq.front();
                qq.pop();
                if(p->left!=NULL){qq.push(p->left);}
                if(p->right!=NULL){qq.push(p->right);}
                each.push_back(p->val);    
            }
            ans.push_back(each);
        }
        return ans;
    }
};