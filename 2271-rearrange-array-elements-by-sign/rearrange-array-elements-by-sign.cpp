class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int>res;
        queue<int>pos;
        queue<int>neg;
        for(int x=0;x<arr.size();x++)
        {
            if(arr[x]>0)
            {
                pos.push(arr[x]);
            }
            else
            {
                neg.push(arr[x]);
            }
        }
        int flag=0;
        for(int x=0;x<pos.size();x++)
        {
            if(flag==0)
            {
            res.push_back(pos.front());
            pos.pop();
            flag=1;
            }
            else
            {
                res.push_back(neg.front());
                neg.pop();
                flag=0;
            }
            x--;
        }
        res.push_back(neg.front());
        return res;
    }
};