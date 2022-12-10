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
    long long total=0;
    long long mod=1000000007;
    void totalsum(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        totalsum(root->left);
        totalsum(root->right);
        total+=root->val;
    }
    long find(TreeNode* root,long &maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        long l=find(root->left,maxi);
        long r=find(root->right,maxi);
        
        long current=l+r+root->val;
        long cp=(current*(total-current));
        if(cp>maxi)
        {
            maxi=cp;
        }
        return current;
    }
    int maxProduct(TreeNode* root) {
        long maxi=0;
        totalsum(root);
        find(root,maxi);
        return (maxi%mod);
    }
};