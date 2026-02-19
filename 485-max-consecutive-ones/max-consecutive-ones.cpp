class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int maxi=0;
        int c=0;
        int n= nums.size();
        while(i<n)
        {
            if(nums[i]==0)
            {
                maxi=max(c,maxi);
                c=0;
            }
            else
            {
                c++;
            }
            i++;
        }
        return max(maxi,c);
        
    }
};