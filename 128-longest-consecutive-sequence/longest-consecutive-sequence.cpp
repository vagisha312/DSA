class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int n = nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto j:s)
        {
            int x= j-1;
            if(s.find(x)==s.end())
            {
                int xx=j+1;
                int c=1;
                while(s.find(xx)!=s.end())
                {
                    xx=xx+1;
                    c++;
                }
                maxi=max(maxi,c);
            }
        }
        if(maxi==INT_MIN)
        return 0;
        else
        return maxi;
        
    }
};