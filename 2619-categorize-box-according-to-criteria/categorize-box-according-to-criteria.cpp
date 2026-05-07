class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false;
        long long volume= 1LL *length*width*height;
        bool heavy=false;
        if(length>=10000||width>=10000||height>=10000||mass>=10000||volume>=1000000000)
            bulky=true;
        if(mass>=100)
            heavy=true;
        if(bulky&&heavy)
            return "Both";
        else if(!bulky && !heavy)
            return "Neither";
        else if(bulky && !heavy)
            return "Bulky";
        else
            return "Heavy";
    }
};