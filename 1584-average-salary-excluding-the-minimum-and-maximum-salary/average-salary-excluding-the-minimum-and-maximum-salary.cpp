class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        vector<int> res;
        res=salary;
        res.erase(res.begin());
        res.erase(res.end());
        double avr=0;
        for(int i=0;i<res.size();i++)
        {
            avr=avr+res[i];
        }
        return avr/res.size();
    }
};