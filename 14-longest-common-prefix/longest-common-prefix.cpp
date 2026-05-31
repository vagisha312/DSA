class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string s2=strs[i];
            int n=ans.size();
            int m=s2.size();
            int k=0;
            int j=0;
            string s1 ="";
            while(k<n && j<m)
            {
                if(ans[k]!=s2[j])
                {
                    break;
                }
                else
                {
                    s1=s1+ans[k];
                    k++;
                    j++;
                }

            }
            ans=s1;
        }
        return ans;
        
    }
};