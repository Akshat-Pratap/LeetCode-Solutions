class Solution {
public:
    string largestGoodInteger(string num) {
        char max_digit = '\0';
        for (int i = 0; i + 2 < num.length(); ++i) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                max_digit = max(max_digit, num[i]);
            }
        }
        return (max_digit == '\0') ? "" : string(3, max_digit);
    }
};