class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int x=0;x<nums1.size();x++)
        {
        v.push_back(nums1[x]);
        }
        for(int y=0;y<nums2.size();y++)
        {
         v.push_back(nums2[y]);
        }
        sort(v.begin(),v.end());
        int siz=v.size();
        int mid=siz/2;
        double median;
        if(siz%2==1)
        {
            median = v[mid];
        }
        else
        {
           float a1=v[mid-1];
            float a2=v[mid];
            median=(a1+a2)/2;
        }
        return median;
        
    }
};