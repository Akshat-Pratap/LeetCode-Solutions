class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int index = (i+nums[i])%n;
            if (index<0)
                index = index + n;
            res.push_back(nums[index]);
        }
        return res;
    }
};