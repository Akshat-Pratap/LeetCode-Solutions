class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        double expectsum= n*(n+1)/2;
        double actualsum=0;
        for (int i=0;i<n;i++)
        {
            int num=nums[i];
            actualsum +=num;
        }
        return expectsum-actualsum;}
};