class Solution {
public:
    // void swapp(int a,int b)
    // {
    //     int temp=a;
    //     a=b;
    //     b=temp;
    // }
    void reverseString(vector<char>& s) {
        
        int i=0;int j=s.size()-1;
        
          while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
            
        
       
    
        
    }
};