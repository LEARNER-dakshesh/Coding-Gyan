class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x=0;x<nums.size();x++)
        {
            mp[nums[x]]++;
        }
        int cnt=0;
//         for(auto x:mp)
//         {
// //             if(x.second<=3 && x.second%2==0)
// //             {
// //                 cnt+=x.second/2;
// //             }
                
// //             if(x.second==1)
// //             {
// //                 return -1;
// //             }
// //             if(x.second>3 && x.second%2!=0)
// //             {
                
// //                 cnt+=(x.second-1)/3;
// //                 cnt+=1;
// //             }
// //             if(x.second%3==0)
// //             {
// //                  cnt+=x.second/3;
// //             }
// //             if(x.second%2==0 && x.second>3)
// //             {
// //                 x.second=x.second-1;
// //                 cnt+=x.second/3;
// //                 cnt+=1; 
// //             }
//             if(x.second>=3)
//             {
//                 cnt+=ceil(x.second/3);
//             }
//             else
//             {
//                 cnt+=x.second/2;
//             }
//             if(x.second==1)
//             {
//                 return -1;
//             }
//         }
//         return cnt;
        
        for(auto x:mp)
        {
            if(x.second==1)
            {
                return -1;
            }
            if(x.second % 3==0)
            {
              int val=x.second/3;
                cnt+=val;
            }
            else
            {
                int val=x.second/3;
                cnt+=val;
                cnt+=1;
            }
        }
        return cnt;
        
        
    }
};