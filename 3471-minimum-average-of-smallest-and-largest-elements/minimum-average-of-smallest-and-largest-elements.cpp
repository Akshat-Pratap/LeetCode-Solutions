class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double ans=DBL_MAX,avg;
        while (i<j)
        {
            avg=(nums[i]+nums[j])/2.0;
            ans=min(avg,ans);
            i++;
            j--;
        }
        return ans;
    }
};