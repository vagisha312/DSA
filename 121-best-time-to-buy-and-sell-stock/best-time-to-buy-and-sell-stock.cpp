class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=prices[n-1];
        int maxi1=INT_MIN;
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]>maxi)
            {
                maxi=prices[i];
            }
            else if(prices[i]<maxi)
            {
                maxi1=max(maxi1,maxi-prices[i]);
            }

        }
        if(maxi1==INT_MIN)
        return 0;
        else
        return maxi1;
        
    }
};