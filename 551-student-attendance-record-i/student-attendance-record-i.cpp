class Solution {
public:
    bool checkRecord(string s) {
        int absent=0, repeatlate=0;
        for(char c:s)
        {
            if(c=='A')
            {
                absent++;
                repeatlate=0;
            }
            else if(c=='L')
                repeatlate++;
            else
                repeatlate=0;
            
        if(absent>=2 || repeatlate>=3)
            return false;
        }
            return true;
    }
};