class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        n=n-1;
        string ans;
        string fans;
        while(s[n]==' ')
        {
            n--;
        }
        for(int i=n;i>=0;i--)
        {
            if(s[i]==' ' && ans!="")
            {
                fans=fans+ans+ ' ';
                ans="";
            }
            else if(s[i]!= ' ')
            {
                ans=s[i]+ans;
            }

        }
        if(ans!="")
        {
            fans=fans+ans;
        }
        string ans1;
        int n1=fans.size();
        int j=n1-1;
        while(fans[j]==' ')
        {
            j--;
        }
        for(int i=0;i<=j;i++)
        {
            ans1=ans1+fans[i];
        }
        return ans1;
        
    }
};