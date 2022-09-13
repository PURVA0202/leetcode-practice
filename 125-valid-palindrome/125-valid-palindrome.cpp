class Solution {
public:
    bool isPalindrome(string s) {
        
      
   
//         string res;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]>='a' && s[i]<='z')
//             {
                
//                 res+=s[i];
//             }
//             else if(s[i]>='A' && s[i]<='Z')
//             {
//                 s[i]=tolower(s[i]);
              
//                 res+=s[i];
//             }
//             else if(s[i]>='0' && s[i]<='9')
//             {
//                 res+=s[i];
//             }
//         }
         
//         int i=0,j=res.size()-1;
        
  
//            while(i<=j)
//         {
//             if(res[i]!=res[j])   return false;
//             i++;
//             j--;
//         }  
//             return true;
        
        int i=0,j=s.size()-1;
        while(i<j)
        {
            while(isalnum(s[i])==false && i<j)   i++;
            while(isalnum(s[j])==false && i<j)  j--;
            if(toupper(s[i])!=toupper(s[j]))    return false;
            i++;
            j--;
        }
        return true;
            
       
       
        
    }
};