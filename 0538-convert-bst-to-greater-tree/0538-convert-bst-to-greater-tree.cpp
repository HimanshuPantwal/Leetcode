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
    TreeNode* find(TreeNode* root,int &sum)
    {
        if(root==NULL)
        {
            return root;
        }
        find(root->right,sum);
        sum+=root->val;
        root->val=sum;
        find(root->left,sum);
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        return find(root,sum);
    }
};