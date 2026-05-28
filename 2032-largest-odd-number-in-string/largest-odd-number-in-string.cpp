class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        int k=INT_MIN;
        string ans="";
        for(int i=n;i>=0;i--)
        {
            int j=num[i]-'0';
            if(j%2!=0)
            {
                k=i;
                break;
            }
        }
        if(k==INT_MIN)
        {
            ans="";
        }
        else
        {
            ans=num.substr(0,k+1);
        }
        
        return ans;
        
    }
};