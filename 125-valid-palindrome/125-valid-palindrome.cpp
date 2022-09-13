class Solution {
public:
    bool isPalindrome(string s) {
        
      
   
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                
                res+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=tolower(s[i]);
              
                res+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                res+=s[i];
            }
        }
         
        int i=0,j=res.size()-1;
        
       // cout<<res<<endl;
//         if(res.size()==1)
//         {
//           return true;
//             }
             
           
//         else
//         {
           while(i<=j)
        {
            if(res[i]!=res[j])   return false;
            i++;
            j--;
        }  
            return true;
            
       
       
        
    }
};