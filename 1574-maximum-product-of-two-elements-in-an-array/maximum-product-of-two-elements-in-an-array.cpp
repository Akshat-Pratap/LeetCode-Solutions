class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                ans=((nums[i]-1))*((nums[j]-1));
                res=max(ans,res);
            }
        }
        return res;
    }
};