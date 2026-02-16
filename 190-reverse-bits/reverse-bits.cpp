class Solution {
public:
    int reverseBits(int n) {
        string num=bitset<32>(n).to_string();
        reverse (num.begin(),num.end());
        return bitset<32>(num).to_ulong();
    }
};