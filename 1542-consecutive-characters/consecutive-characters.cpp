class Solution {
public:
    int maxPower(string s) {
        if (s.empty())    return 0;
        int count=1,ans=1;
     for(int i=1;i<s.size();i++)
     {
        if(s[i]==s[i-1])
            count++;
        else
            count=1;
         ans=max(count,ans);
     }   
     return ans;
    }
};