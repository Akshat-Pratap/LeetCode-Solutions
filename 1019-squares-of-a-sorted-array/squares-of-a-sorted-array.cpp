class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for (int j=0;j<n;j++)
        {
            nums[i]=nums[j]*nums[j];
            i++;
        }
        sort(nums.begin(),nums.end());
        return nums;}
};