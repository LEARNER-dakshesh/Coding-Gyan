class Solution {
public:
    int countTriplets(vector<int>& arr) {
       int cnt=0;
       int n=arr.size();

       for(int i=0;i<n;i++)
       {
            for(int j=i+1;j<n;j++)
            {
                int a=0,b=0;
                for(int x=i;x<j;x++)
                {
                    a=a^arr[x];
                }
                for(int y=j;y<n;y++)
                {
                    b=b^arr[y];
                    if(a==b)
                    {
                        cnt++;
                    }  
                 }    
            }
       }
       return cnt;
        
        return cnt;
    }
};
