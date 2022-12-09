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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    void find(TreeNode* root,int l,int height,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        l+=1;
        if(l==height)
        {
            v.push_back(root->val);
        }
        find(root->left,l,height,v);
        find(root->right,l,height,v);
        return;
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int h=height(root);
        vector<int> v;
        int sum=0,l=0;
        find(root,l,h,v);
        for(auto x:v)
        {
            sum+=x;
        }
        return sum;
    }
};