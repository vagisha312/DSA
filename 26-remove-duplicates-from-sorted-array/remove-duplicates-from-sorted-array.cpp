class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j=1;
        int i=0;
        while(i<n && j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                swap(nums[i+1],nums[j]);
                j++;
                i++;
            }

        }
        return i+1;
        
    }
};