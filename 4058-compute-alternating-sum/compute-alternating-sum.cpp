class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for (int i=0;i<n;i++)
        {
            if(i%2==0)
                res+=nums[i];
            else
                res=res-nums[i];
        }
        return res;
    }
};