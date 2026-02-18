class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x=(n^(n>>1));
        if((x&(x+1))==0)
            return true;
        else
            return false;
    }
};