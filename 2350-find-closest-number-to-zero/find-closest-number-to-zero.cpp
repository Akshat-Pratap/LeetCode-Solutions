class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int ans = nums[0];
        int min2 = abs(nums[0]);
        for (int i=1; i<n; i++)
        {   int min1 = abs(nums[i]);

            if (min1 < min2)
            {   min2 = min1;
                ans = nums[i];
            }
            else if(min1==min2 && nums[i] > ans)
            {
                ans = nums[i];
            }
        }
    return ans;}
};