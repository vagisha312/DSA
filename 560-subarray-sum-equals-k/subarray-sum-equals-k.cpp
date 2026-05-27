class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int s=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            if(s==k)
            {
                c++;
            }
            int temp=s-k;
            if(mp.find(temp)!=mp.end())
            {
                c=c+mp[temp];
                
            }
            mp[s]++;
        }
        return c;
        

    }
};