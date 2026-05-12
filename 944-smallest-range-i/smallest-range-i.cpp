class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxnum=*max_element(nums.begin(),nums.end());
        int minnum=*min_element(nums.begin(),nums.end());
        return max(0,maxnum-minnum - 2*k);
    }
};