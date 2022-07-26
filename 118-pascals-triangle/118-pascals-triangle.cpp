class Solution {
public:
    vector<vector<int>> generate(int n)
    {
        
//     vector<vector<int>> ans;
   
//     int t=1;
//     while(t<=n)
//     {
//           if(t==1 || t==2)
//     {
//          vector<int> v;
//         for(int i=0;i<t;i++)
//         {
//             v.push_back(1);
//         }
//         ans.push_back(v);
//     }
//     else if(t==3)
//     {
//         vector<int> v;
//         v.push_back(1);
//         v.push_back(2);
//         v.push_back(1);
//         ans.push_back(v);
//     }
//     else{
//          vector<int> v;
//         v.push_back(1);
//         // for(int i=1;i<t-1;i++)
//         // {
//             for(int j=0;j<ans[t-2].size()-1;j++)
//             {
//                 v.push_back((ans[t-2][j])+(ans[t-2][j+1]));
//             }
           
//         //}
//          v.push_back(1);55678
//          ans.push_back(v);

//     }
//     t++;

//     }
//     return ans;
        
        
        //efficient solution
        vector<vector<int>> t(n);
        
        for(int i=0;i<n;i++)
        {
            t[i].resize(i+1);
            t[i][0]=t[i][i]=1;
            for(int j=1;j<i;j++)
            {
                t[i][j]=t[i-1][j-1]+t[i-1][j];
            }
        }
        return t;
    }
};