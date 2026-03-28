class Solution {
public:
    int countDigits(int num) {
        int digit=0;
        int temp=num;
        long int count=0;
        while(temp>0)
        {
            digit=temp%10;
            if (num%digit==0)
            {
                count+=1;
            }
            temp=temp/10;
        }
        return count;
    }
};