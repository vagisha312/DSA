class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum=0;
        for(int i=0;i<=n;i++)
        {
            sum1=sum1+i;

        }
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        return sum1-sum;
        
    }
};