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
    
    TreeNode* find(vector<int> nums,int low,int high)
    {
        if(low>high)
        {
            return NULL;
        }
        int max=INT_MIN;
        int index;
        for(int i=low;i<=high;i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
                index=i;
            }
        }
        TreeNode*  root=new TreeNode(max);
        if(index-1>=0)
        {
        root->left=find(nums,low,index-1);
        }
        if(index+1<nums.size())
        {
         root->right=find(nums,index+1,high);
        }
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return find(nums,0,nums.size()-1);
    }
};