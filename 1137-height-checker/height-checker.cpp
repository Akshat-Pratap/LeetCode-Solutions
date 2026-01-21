class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected=heights;
        int count=0;
        sort (heights.begin(),heights.end());
        for (int i=0;i<heights.size();i++)
        {
            if (expected[i]!=heights[i])
            {
                count++;
            }
        }
        if (count>=1)
            return count;
        else
             return 0;
    }
};