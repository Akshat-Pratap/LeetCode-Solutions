class Solution {
public:
    int reverse(int x) {
        long rnum=0;
        while(x!=0)
        {
            int ld=x%10;
            rnum= (rnum*10)+ld;
            x= x/10;
            if(rnum>INT_MAX||rnum<INT_MIN)
                return 0;
        }
        return rnum;
    }
};