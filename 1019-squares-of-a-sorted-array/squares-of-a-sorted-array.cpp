class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for (int j=0;j<n;j++)
        {
            nums[j]=nums[j]*nums[j];
        }
        sort(nums.begin(),nums.end());
        return nums;}
};