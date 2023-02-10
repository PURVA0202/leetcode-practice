//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        sort(s.begin(),s.end());
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        //sort(mp.begin(),mp.end());
        vector<int> v1={1,1,2,1,2};
        vector<int> v;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->first=='a')
            {
                v.push_back(it->second);
            }
            else if(it->first=='b')
            {
                v.push_back(it->second);
            }
            else if(it->first=='l')
            {
                v.push_back(it->second);
            }
            else if(it->first=='n')
            {
                v.push_back(it->second);
            }
            else if(it->first=='o')
            {
                v.push_back(it->second);
            }
            
        }
        // for(int i=0;i<5;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        int count=0;
        vector<int> c;
        for(int i=0;i<5;i++)
        {
            c.push_back(v[i]/v1[i]);
        }
        sort(c.begin(),c.end());
        return c[0];
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends