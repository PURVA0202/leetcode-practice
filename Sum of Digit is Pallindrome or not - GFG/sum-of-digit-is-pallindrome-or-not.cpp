//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int sum=0;
        while(N!=0)
        {
            int dig=N%10;
            
            sum+=dig;
            N=N/10;
        }
        int rev=0;
        int num=sum;
       
        int ans=0;
        while(sum!=0)
        {
            int dig1=sum%10;
            rev=rev*10+dig1;
            sum/=10;
        }
     
        if(rev==num)
        {
            ans=1;
        }
        else
        {
            ans=0;
        }
        return ans;
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends