class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> v ;
        int s1 = nums1.size() , s2 = nums2.size() ; 
        for(int i =0 ; i < s1 ; i++)
        {
            v.push_back(nums1[i]) ;
        }
        for(int i =0 ; i <s2 ; i++)
        {
            v.push_back(nums2[i]) ;
        }
        int x1=0,x2=0;
        sort( (v).begin(), (v).end()) ;
        int n = v.size();
        if (n % 2 == 1) {
            return v[n / 2];
        } 
        else
        {
            return (v[n / 2] + v[n / 2 - 1]) / 2.0;
        }

    }
};