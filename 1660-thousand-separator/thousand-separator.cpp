class Solution {
public:
    string thousandSeparator(int n) {
        int digitCount=0;
        string result="";
        if(n==0)    return "0";
        while(n>0)
        {
            if(digitCount==3)
            {
                result+= '.';
                digitCount=0;
            }
            int digit=n%10;
            result+= (digit + '0');
            digitCount++;
            n/=10;
        }
        reverse(result.begin(),result.end());
        return result;

    }
};