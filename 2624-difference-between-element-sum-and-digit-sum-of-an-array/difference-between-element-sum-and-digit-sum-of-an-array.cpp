class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0;
        int digitsum=0;
        for(int num : nums)
        {
            elementsum+=num;
            int temp=num;
            while(temp>0)
            {
                digitsum+=temp%10;
                temp/=10;
            }
        }
        return abs(elementsum-digitsum);
    }
};