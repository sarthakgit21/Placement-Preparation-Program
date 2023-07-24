class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int ans=-1;
        
        int n=haystack.size();
        
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            
            if(haystack[i]==needle[j])
            {
                int ind=i;
                
                while(j<needle.size() && haystack[i]==needle[j])
                {
                    
                    j++;
                    
                    i++;
                    
                    // cout<<i<<endl;
                    
                }
                
                
                if(j==needle.size()) return ind;
                
                j=0;
                i=ind;
            }
            
        }
        
        return ans;
        
    }
};
