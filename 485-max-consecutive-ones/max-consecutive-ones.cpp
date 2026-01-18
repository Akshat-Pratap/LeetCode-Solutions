class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maximum=0;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==1)
            {
                count++;
                maximum=max(maximum,count);
            }
            else 
            {
                count=0;
            }
        }
        return maximum;
    }
};