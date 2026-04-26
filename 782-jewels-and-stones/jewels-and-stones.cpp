class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelset(jewels.begin(),jewels.end());
        int count=0;
        for (char c:stones)
        {   
            if(jewelset.count(c))
                count+=1;
        }
        return count;
    }
};