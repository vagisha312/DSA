class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n= nums.size();
        while(i<n && nums[i]!=0)
        {
            i++;
        }
        if(i==n)
        {
            return;
        }
        int j=i+1;
        while(j<n)
        {
            if(nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
            j++;
        }
        
    }
};