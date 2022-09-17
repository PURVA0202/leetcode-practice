class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int temp[n][m];
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp[i][j]=matrix[j][i];
            }
        }
         for(int i=0;i<n;i++)
        {
             vector<int> t;
            for(int j=0;j<m;j++)
            {
                t.push_back(temp[i][j]);
            }
             v.push_back(t);
        }
        return v;
    }
};