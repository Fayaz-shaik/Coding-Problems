/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
 public:   
    #include <string>
    TreeNode* helpFunc(queue<string> &q){
        string sq = q.front();
        q.pop();
        if(sq=="fine") 
            return NULL;
        
        int f = stoi(sq);
        TreeNode* root = new TreeNode(f);
        root->left = helpFunc(q);
        root->right = helpFunc(q);
        return root;
        
        
    }


    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root){
            return "fine+";
        }
        return to_string(root->val)+"+"+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string ss;
        for(int i =0;i<data.size();i++){
            if(data[i]=='+'){
                q.push(ss);
                ss="";
                continue;
            }
            ss = ss + data[i];
        }
        if(ss.size()!=0)
            q.push(ss);
        return helpFunc(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));