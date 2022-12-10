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
    void insert(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return;
        insert(root->left,v);
        v.push_back(root->val);
        insert(root->right,v);
    }
    void sorting(vector<int> &v1,vector<int> &v2,vector<int> &ans)
    {
        int i=0,j=0,k=0;
        while(i<v1.size() && j<v2.size())
        {
            if(v1[i]<v2[j])
            {
                ans.push_back(v1[i]);
                    i++;
            }
            else
            {
                ans.push_back(v2[j]);
                j++;
            }
        }
        while(i<v1.size())
        {
            ans.push_back(v1[i]);
            i++;
        }
        while(j<v2.size())
        {
            ans.push_back(v2[j]);
            j++;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
         vector<int> v1,v2;
         insert(root1,v1);
         insert(root2,v2);
        if(v1.size()==0)
        {
            return v2;
        }
        if(v2.size()==0)
        {
            return v1;
        }
         vector<int> ans;
         sorting(v1,v2,ans);
         return ans;
    }
};