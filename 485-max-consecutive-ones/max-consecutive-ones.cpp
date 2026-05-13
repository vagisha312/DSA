class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                maxi=max(maxi,c);
                c=0;
            }
        }
        return max(maxi,c);
        
    }
};