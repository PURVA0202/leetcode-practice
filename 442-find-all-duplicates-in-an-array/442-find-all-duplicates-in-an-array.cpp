class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.empty()==false && s.find(nums[i])!=s.end())
            {
                v.push_back(nums[i]);
            }
            s.insert(nums[i]);
        }
       return v;
    }
};