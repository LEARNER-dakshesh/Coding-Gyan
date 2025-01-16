class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size(); 
        int xora=0;
        if(n1%2==0 && n2%2==0)
        {
            return 0;
        }
        if(n1%2!=0 && n2%2==0)
        {
            int xora=0;
            for(int x=0;x<nums2.size();x++)
            {
                xora^=nums2[x];
            }
            return xora;
        }
        else if(n1%2==0 && n2%2!=0)
        {
            int xora=0;
            for(int x=0;x<nums1.size();x++)
            {
                xora^=nums1[x];
            }
            return xora;
        }
      
        else{
            for(int x=0;x<nums1.size();x++)
            {
                xora^=nums1[x];
            }
            for(int x=0;x<nums2.size();x++)
            {
                xora^=nums2[x];
            }
        }
        return xora;
    }
};