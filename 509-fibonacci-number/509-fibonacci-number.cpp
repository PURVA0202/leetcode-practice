class Solution {
public:
    int fib(int n) {
        
        if(n==1 || n==0)
        {
            return n;
        }
        else
        {
            int t=fib(n-2)+fib(n-1);
             return t;
        }
       
    }
};