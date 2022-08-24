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
    vector<int> levelorder(TreeNode*root)
    {
    
        vector<int> v;
        queue<TreeNode *> q;
        q.push(root);
        while(q.empty()==false)
        {
            if(q.front()==NULL)  
            {v.push_back(NULL);
             q.pop();
            }
            else 
            {
            TreeNode *curr=q.front();q.pop();
            v.push_back(curr->val);
            if(curr->left==NULL)    q.push(NULL);
            else                    q.push(curr->left);
            q.push(curr->right);
            }
         }
        return v;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)      return true;
        if(levelorder(p)==levelorder(q))
            return true;
        else
            return false;
    }
};