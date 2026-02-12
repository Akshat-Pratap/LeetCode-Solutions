class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        salary.erase(salary.begin());
        salary.erase(salary.end());
        double avr=0;
        for(int i=0;i<salary.size();i++)
        {
            avr=avr+salary[i];
        }
        return avr/salary.size();
    }
};