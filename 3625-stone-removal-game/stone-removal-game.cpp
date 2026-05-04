class Solution {
public:
    bool canAliceWin(int n) {
        int stones=10;
        bool aliceturn=true;
        while(n>=stones)
        {
            n-=stones;
            stones--;
            aliceturn=!aliceturn;
        }
        return !aliceturn;
    }
};