class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=prices[0];
        int maxii=INT_MIN;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<maxi)
            {
                maxi=prices[i];

            }
            else
            {
                int diff=prices[i]-maxi;
                maxii=max(maxii,diff);
            }
        }
        if(maxii==INT_MIN)
        return 0;
        else
        return maxii;
        
    }
};