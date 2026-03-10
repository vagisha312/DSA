class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> v(n);
        int mini=INT_MAX;
        int maxi= INT_MIN;
        for(int i =0;i<n;i++)
        {
            mini= min(mini,prices[i]);
            v[i]=mini;
            
        }
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,prices[i]-v[i]);
        }
        return maxi;
        
    }
};