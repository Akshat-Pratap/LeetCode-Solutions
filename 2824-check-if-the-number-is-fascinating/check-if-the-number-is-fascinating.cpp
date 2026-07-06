class Solution {
public:
    bool isFascinating(int n) {
        string res = to_string(n) + to_string(2*n) + to_string(3*n);
        if(res.size()!=9)   return false;
        sort(res.begin(),res.end());
        return res=="123456789";
    }
};