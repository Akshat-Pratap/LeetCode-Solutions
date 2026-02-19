class Solution {
public:
    int reverse(int x) {
        int rnum=0;
        while(x!=0)
        {
            int ld=x%10;
            x= x/10;
            if(rnum>INT_MAX/10 || (rnum==INT_MAX/10 && ld>7))
                return 0;
            if(rnum<INT_MIN/10 || (rnum==INT_MIN/10 && ld<-8))
                return 0;
            rnum= (rnum*10)+ld;
        }
        return rnum;
    }
};