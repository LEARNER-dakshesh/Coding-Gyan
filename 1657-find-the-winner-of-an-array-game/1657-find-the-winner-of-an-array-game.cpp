class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int curr=arr[0];
        int wins=0;
        for(int x=1;x<arr.size();x++)
        {
            if(arr[x]>curr)
            {
                curr=arr[x];
                wins=1;
            }
            else{
                wins++;
            }

            if(wins==k)
            {
                return curr;
            }
        }
        return curr;
    }
};