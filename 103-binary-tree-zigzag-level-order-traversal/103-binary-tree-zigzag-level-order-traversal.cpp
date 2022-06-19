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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        bool leftRight = true;
        q.push(root);
        while(q.empty()==false){
            int size = q.size();
            vector<int> v(size);
            for(int i =0;i<size;i++){
                TreeNode* tmp = q.front();
                q.pop();
                int index = (leftRight) ? i : (size-i-1);
                v[index] = tmp->val;
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right)
                    q.push(tmp->right);
                
            }
            leftRight = !leftRight;
            ans.push_back(v);
        }
        return ans;
    }
};