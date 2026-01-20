class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort (nums1.begin(),nums1.end());
        sort (nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        int j = 0, i = 0;
        vector<int> result;
        while(i<n1 && j<n2)
        {
            if(nums1[i]==nums2[j])
            {
                if(result.empty()||result.back()!=nums1[i])
                {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
                j++;
        }
        return result;
    }
};