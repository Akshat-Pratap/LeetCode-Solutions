class Solution {
public:
    int passThePillow(int n, int time) {
        int full_sweeps= time/(n-1);
        int extra_time= time%(n-1);
        if(full_sweeps%2==0)
            return 1+extra_time;
        else
            return n- extra_time;
    }   
};