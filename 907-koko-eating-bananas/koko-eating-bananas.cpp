class Solution {
private:
bool canEatAll(const vector<int>&piles,int h,int k){
    long long totalHours=0;
    for(int bananas:piles)
    {
        totalHours+= (bananas+k-1)/k;
    }
    return totalHours<=h;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int result=high;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            if(canEatAll(piles,h,mid))
            {
                result=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return result;
    }
};