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
    int ans=0;
    void helper(TreeNode* root,int mini,int maxi)
    {
        if(root==NULL)return; 
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        ans=max(ans,max(abs(root->val-mini),abs(root->val-maxi)));
        helper(root->left,mini,maxi);
        helper(root->right,mini,maxi);
        return;
    } 
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        helper(root,root->val,root->val);
        return ans;
    }
};