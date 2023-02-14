//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int solve(int currrow,int currcol,int N,vector<vector<int>> &colors,vector<vector<int>> &memo)
    {
        	if (currrow == N - 1)
	{
		return colors[currrow][currcol];
	}
        if(memo[currrow][currcol]!=-1)    return memo[currrow][currcol];
        int current=INT_MAX;
        for(int i=0;i<3;i++)
        {
            if(i!=currcol)
            {
                current=min(current,colors[currrow][currcol]+solve(currrow+1,i,N,colors,memo));
            }
        }
        return memo[currrow][currcol]=current;
        // return current;
        
    }
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
     vector<vector<int>> memo(N+1, vector<int> (4,-1));
       
       int ans=INT_MAX;
       for(int i=0;i<3;i++)
       {
           ans=min(ans,solve(0,i,N,colors,memo));
       }
       return ans;
       
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends