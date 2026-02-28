class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size());
        int posindex=0;
        int negindex=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                {res[negindex]=nums[i];
                negindex+=2;}
            else
                {res[posindex]=nums[i];
                posindex+=2;}
        }
        return res;
    }
};