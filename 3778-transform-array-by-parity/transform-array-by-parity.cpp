class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>res;
        for (int i=0;i<nums.size();i++)
        {   
            int ans=1;
            if(nums[i]%2==0)
            {
                ans=0;
            }
            res.push_back(ans);
        }
        sort(res.begin(),res.end());
        return res;
    }
};