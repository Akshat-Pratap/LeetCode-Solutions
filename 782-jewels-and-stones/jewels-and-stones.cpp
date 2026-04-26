class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for (char c:jewels)
        {
            for(int i=0;i<stones.size();i++)
            {
                if(c==stones[i])
                    count+=1;
            }
        }
        return count;
    }
};