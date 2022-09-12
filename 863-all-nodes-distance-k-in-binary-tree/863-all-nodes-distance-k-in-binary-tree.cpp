/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //function to mark the parents of node and insert them into the map
    void parentpointer(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent, TreeNode* target)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false)
        {
            TreeNode *curr=q.front();
            q.pop();
            if(curr->left!=NULL)
            {
                parent[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                parent[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
       unordered_map<TreeNode*,TreeNode*> parent;
       vector<int> v;
        parentpointer(root,parent,target);
        unordered_map<TreeNode*,bool> visited;
       queue<TreeNode*> q;
       q.push(target);
        visited[target]=true;
        int dis=0;
       while(q.empty()==false)
       {
           int size=q.size();
           if(dis++ == k)    break;
           
           for(int i=0;i<size;i++)
           {
           TreeNode* curr= q.front();
           q.pop();
           
           if(curr->left!=NULL && visited[curr->left]==false)
           {
               q.push(curr->left);
               visited[curr->left]=true;
           }
           if(curr->right!=NULL && visited[curr->right]==false)
           {
               q.push(curr->right);
               visited[curr->right]=true;
           }
           if(parent[curr]!=NULL && visited[parent[curr]]==false)
           {
               q.push(parent[curr]);
               visited[parent[curr]]=true;
           }
               
           }
       }
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            v.push_back(curr->val);
        }
        return v;
    }
};