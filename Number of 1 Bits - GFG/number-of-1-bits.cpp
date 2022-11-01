//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        if(N==0) return 0;
        vector<int> v;
        int count=0;
        while(N!=0)
        {
            int rem = N%2;
            v.push_back(rem);
            N/=2;
            
        }
        // cout<<v[0];
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends