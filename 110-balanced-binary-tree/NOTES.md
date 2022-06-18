Another approach :
class Solution {
public:
bool isBalanced(TreeNode* root) {
bool ans=true;
h(root, ans);
return ans;
}
int h(TreeNode* root, bool& ans)
{
if(root==NULL)
return 0;
int lh=h(root->left, ans);
int rh= h(root->right, ans);
if(abs(lh-rh)>1)
ans=false;
return 1+max(lh,rh);
}
};
​
Another Approach:
​