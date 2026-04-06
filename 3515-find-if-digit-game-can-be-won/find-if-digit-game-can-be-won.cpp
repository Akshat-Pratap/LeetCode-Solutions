class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int num:nums)
        {
            if(num>=0 && num <=9)
                sum1+=num;
            else
                sum2+=num;
        }
        return (sum1!=sum2);
    }
};