class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int totalDays=0;
        vector<string> days= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        vector<int>monthDays = {31,28,31,30,31,30,31,31,30,31,30,31};
        for(int y=1971;y<year;y++)
        {
            totalDays += (isleap(y)?366:365);
        }
        for(int m=1;m<month;m++)
        {
            totalDays += monthDays[m-1];
            if(m==2 && isleap(year))
            {
                totalDays += 1;
            }
        }
        totalDays += day;
        return days[(totalDays+4)%7];
    }
    private:
        bool isleap(int year)
        {
            return (year%400==0)|| (year%4==0 && year%100!=0);
        }
};