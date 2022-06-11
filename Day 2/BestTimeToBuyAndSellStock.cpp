class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //O(n^2)
        // int Max=0;
        // for(int i=0;i<prices.size();i++)
        // {
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //         if(prices[j]>prices[i])
        //         {
        //             Max=max(prices[j]-prices[i],Max);
        //         }
        //     }
        // }
        // return Max;
        
        //O(n)
        int Max=0,Min=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            Min=min(Min,prices[i]);
            Max=max(prices[i]-Min,Max);
        }
        return Max;
    }
};
