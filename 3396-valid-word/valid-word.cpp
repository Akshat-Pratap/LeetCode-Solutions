class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool vowel=false, consonant=false;
        for(char c:word)
        {
            if(!isalnum(c)) return false;
            if(isalpha(c))
            {
                char ch=tolower(c);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    vowel=true;
                else
                    consonant=true;
            }
        }
        return vowel&&consonant;
    }
};