class Solution {
public:
    bool check(vector<int>& nums) {
        int f =0;
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                f++;
            }
        }
        if(f==1 && nums[n-1]<=nums[0])
        return true;
        else if(f==0 && nums[n-1]>= nums[0] )
        return true ;
        else 
        return false;
        
    }
};