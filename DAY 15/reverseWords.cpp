public:
    string reverseWords(string s) {
        string ss;
        vector<string> v;
        for(auto x:s)
        {
            if(x!=' ') ss+=x;
            else
            {
                if(!ss.empty())
                {
                    v.push_back(ss);
                    ss="";
                }
            }
        }
          if(!ss.empty())
                {
                    v.push_back(ss);
                    ss="";
                }
        
        string ans="";
        reverse(begin(v),end(v));
        int i=0;
        for(auto c:v)
        {
            ans+=c;
            if(i==v.size()-1) break;
            ans+=' ';
            i++;
        }
        return ans;
        
    }
