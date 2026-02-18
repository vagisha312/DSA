class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                f++;
            }
        }
        if(f>1)
        return false;
        else if(f>=1 && nums[0]<nums[n-1])
        return false;
        else
        return true ;
        
    }
};