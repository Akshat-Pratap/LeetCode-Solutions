class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, product=1;
        while(n>0)
        {
            int digits = n%10;
            sum+=digits;
            product*=digits;
            n=n/10;
        }
        return (product-sum);
    }
};