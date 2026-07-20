class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int count = 0;
        string vowels="aeiouAEIOU";
        for(int i=0;i<n/2;i++)
        {
            if(vowels.find(s[i])!= string::npos)
                count++;
            if(vowels.find(s[n/2 + i])!= string::npos)
                count--;
        }
        return count==0;
    }
};