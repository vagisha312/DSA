class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;
        int k1=n-k;
        reverse(nums.begin(),nums.begin()+k1);
        reverse(nums.begin()+k1,nums.end());
        reverse(nums.begin(),nums.end());


        
    }
};