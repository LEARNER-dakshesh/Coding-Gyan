class Solution {
public:
bool helper(int nums1,int nums2)
{
    int count=0;
    string s1=to_string(nums1);
    string s2=to_string(nums2);
    if(s1.size()<s2.size())
    {
        for(int x=0;x<=s2.size()-s1.size();x++)
        {
            s1="0"+s1;
        }
    }
    else if(s2.size()<s1.size())
    {
        for(int x=0;x<=s1.size()-s2.size();x++)
        {
            s2="0"+s2;
        }
    }
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(int x=0;x<s1.size();x++)
    {
        mp1[s1[x]]++;
        mp2[s2[x]]++;
        count+=(s1[x]!=s2[x]);
    }
    
    return count<=2 && mp1==mp2;
}
    int countPairs(vector<int>& nums) {
        int ans=0;
        for(int x=0;x<nums.size();x++)
        {
            for(int y=x+1;y<nums.size();y++)
            {
               if(helper(nums[x],nums[y]))
               {
                ans+=1;
               } 
            }
        }

        return ans;

    }

};