class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int j=1;
        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else if(nums[i]!=nums[j] && (j-i)>1)
            {
                swap(nums[i+1],nums[j]);
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        return i+1;
        
    }
};