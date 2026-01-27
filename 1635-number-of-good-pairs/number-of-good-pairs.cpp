class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int j=n-1;
        for(int i=0;i<n;i++)
        {
            for (int j=n-1;j>0;j--)
            {
                if (nums[i]==nums[j]&&i<j)
                {
                    res++;
                }
            }

        }
        return res;
    }
};