class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,buy=prices[0];
           if(buy>prices[i])
           buy=prices[i];
           if(prices[i]-buy>max)
           max=prices[i]-buy;
        }
        return max;
    }
};
