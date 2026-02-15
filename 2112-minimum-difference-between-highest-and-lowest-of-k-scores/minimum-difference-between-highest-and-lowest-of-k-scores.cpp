class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        if (k<=1)
        {
            return 0;
        }
        for (int i=0;i+k-1<nums.size();i++)
        {
            ans=min(ans,nums[i+k-1]-nums[i]);
        }
        return ans;
    }
};