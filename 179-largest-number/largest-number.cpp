class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        
        auto cmp =[](string a,string b)
        {
            string c=a+b;
            string d=b+a;
            if(c<d)
            {
                return true;
            }
            return false;
        };
        priority_queue<string,vector<string>,decltype(cmp)>pq(cmp);
        int n=nums.size();
        for(int x=0;x<n;x++)
        {
            pq.push(to_string(nums[x]));
        }
        string ans="";
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();

        }
        if(ans[0]=='0')
        {
            return "0";
        }
        return ans;
    }
};