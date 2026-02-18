class Solution {
public:

void reverse(vector<int>& nums, int i , int j)
{
    while(i<j)
    {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k =k%n;
        if(k==n)
        {
            return ;
        }
        int p=n-k;
        reverse(nums ,0,p-1);
        reverse(nums ,p,n-1);
        reverse(nums ,0,n-1);
        
    }
};