class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        sort (nums.begin(),nums.end());
        int total=0;
        for (int i=0;i<n;i+=2)
        {
            total+=nums[i];
        }
        return total;
    }
};