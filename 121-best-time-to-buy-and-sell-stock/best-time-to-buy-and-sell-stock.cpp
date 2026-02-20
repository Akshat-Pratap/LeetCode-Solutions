/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minnum=prices[0];
        int maxnum=prices[0];
        for (int i=1;i<n;i++)
        {
            if (prices[i]<minnum)
                minnum=prices[i];
            
            if ((prices[i]>maxnum)&&(maxnum>minnum))
                maxnum=prices[i];
        }
        if (minnum==prices[n-1])
            return {0};
        return maxnum-minnum;
    }
};*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minnum=prices[0];
        int profit=0;
        for (int i=1;i<n;i++)
        {
            if (prices[i]<minnum)
                minnum=prices[i];
            else if ((prices[i]-minnum)>profit)
                profit=prices[i]-minnum;
        }
        return profit;
    }
};