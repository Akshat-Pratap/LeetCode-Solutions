class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0, right=0, dash=0;
        for(char c:moves)
        {
            if(c=='L')
                left++;
            else if(c=='R')
                right++;
            else
                dash++;
        }
        if(left>=right)
            left+=dash;
        else
            right+=dash;
        return abs(right-left);
    }
};