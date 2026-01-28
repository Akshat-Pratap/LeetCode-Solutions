class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int d) {
         
        vector<int>ans(2*d);
        int in=0;
        for(int i=0;i<d;i=i+1){
            ans[in]=nums[i];
            ans[in+1]=nums[d+i];
            in=in+2;;

        }
        return ans;
        
    }
};