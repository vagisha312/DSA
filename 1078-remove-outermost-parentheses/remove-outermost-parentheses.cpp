class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int c =0; 
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c++;
                if(c>1)
                ans=ans+s[i];
            }
            else
            {
                c--;
                if(c!=0)
                {
                    ans=ans+s[i];
                }
            }
        }
        return ans;
        
    }
};