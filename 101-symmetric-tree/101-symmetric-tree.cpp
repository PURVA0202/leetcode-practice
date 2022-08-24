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
    vector<int> level_order(TreeNode*root)
    {
        vector<int> v;
        queue<TreeNode *> q;
        q.push(root);
        while(q.empty()==false)
        {
            if(q.front()==NULL)
            {
                v.push_back(NULL);
                q.pop();
            }
            else
            {
            TreeNode* curr=q.front();
            q.pop();
            v.push_back(curr->val);
            if(curr->left==NULL)      q.push(NULL);
            else                      q.push(curr->left);
            if(curr->right==NULL)      q.push(NULL);
            else                      q.push(curr->right);
            }
        }
        return v;
    }
    
        vector<int> right_order(TreeNode*root)
    {
            vector<int> v;
        queue<TreeNode *> q;
        q.push(root);
        while(q.empty()==false)
        {
            if(q.front()==NULL)
            {
                v.push_back(NULL);
                q.pop();
            }
            else
            {
            TreeNode* curr=q.front();
            q.pop();
            v.push_back(curr->val);
            if(curr->right==NULL)      q.push(NULL);
            else                      q.push(curr->right);
             if(curr->left==NULL)      q.push(NULL);
            else                      q.push(curr->left);
            }
        }
        return v;
    }
    

        
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)       return true;
        if(level_order(root->left)==right_order(root->right))
            return true;
        else
            return false;
        
    }
};