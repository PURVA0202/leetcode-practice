class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
      //better approach using dummy arrays
        vector<int> dummy1(m,-1),dummy2(n,-1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    dummy1[i]=0;
                    dummy2[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((dummy1[i]==0) || (dummy2[j]==0))
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        
        
        
        
        
        
        
        
        
        
//       approach only when elements are non negative        
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     int ind=i-1;
//                     //marking nonzero elements of same row and column as -1
//                     while(ind>=0)
//                     {
//                         if(matrix[ind][j]!=0)
//                         {
//                             matrix[ind][j]=-1;
//                         }
//                         ind--;
//                     }
                    
//                     ind = i+1;
//                     while(ind<m)
//                     {
//                         if(matrix[ind][j]!=0)
//                         {
//                             matrix[ind][j]=-1;
//                         }
//                         ind++;
//                     }
                    
//                     ind = j-1;
//                     while(ind>=0)
//                     {
//                         if(matrix[i][ind]!=0)
//                         {
//                             matrix[i][ind]=-1;
//                         }
//                         ind--;
//                     }
                    
//                     ind=j+1;
//                     while(ind<n)
//                     {
//                         if(matrix[i][ind]!=0)
//                         {
//                             matrix[i][ind]=-1;
//                         }
//                         ind++;
//                     }
                    
//                 }
//             }
//         }
        
//         //replacing -1 by zero
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]==-1)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
        
    }
};