class Solution {
public:
    int totalMoney(int n) {
        int weeks=n/7;
        int days=n%7;
        int sum_weeks=weeks*28+7*(weeks*(weeks-1)/2);
        int start=weeks+1;
        int sum_days=days*start+(days*(days-1)/2);
        return sum_weeks+sum_days;
    }
};