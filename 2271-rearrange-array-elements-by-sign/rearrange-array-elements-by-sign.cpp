class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        int i =0;
        int j=0;
        int e =0;
        while(i<n || j<n)
        {
            if(e%2==0 && i<n && nums[i]>0)
            {
                ans.push_back(nums[i]);
                e=1;
                i++;
            }
            else if(e%2 ==0 && i<n && nums[i]<0)
            {
                i++;
            }
            else if(e%2 == 1 && j<n && nums[j]<0)
            {
                ans.push_back(nums[j]);
                j++;
                e=0;

            }
            else
            {
                j++;
            }

        }
        return ans ;


        
    }
};