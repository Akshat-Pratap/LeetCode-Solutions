class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        string s = to_string(n);
        int sign=1;
        for(char c:s)
        {
            int digit = c - '0';
            sum+= sign*digit;
            sign*=-1;
        }
        return sum;
    }
};