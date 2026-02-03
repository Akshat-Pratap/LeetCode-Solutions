class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==2)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=res[i];
        }
    }
};