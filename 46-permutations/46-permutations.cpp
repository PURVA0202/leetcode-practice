class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recursive(ans,nums,0);
        return ans;
        
        
        
        
    }
    
    void recursive(vector<vector<int>> &ans,vector<int> nums,int i)
    {
        int n=nums.size();
        if(i==n)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            recursive(ans,nums,i+1);
            
        }
        
    }
};