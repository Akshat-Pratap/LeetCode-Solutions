class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        long int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        while (true)
        {
            if(sum%k==0)
                return count;
            else
                sum--;
                count+=1;
        }
    }
};