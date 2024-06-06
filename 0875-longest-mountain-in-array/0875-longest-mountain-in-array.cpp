class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxa=0;
        for(int x=0;x<arr.size();x++)
        {
            int cnt=0,flag=0,flag1=0;
            for(int y=x+1;y<arr.size();y++)
            {
                if(flag==0)
                {
                if(arr[y]>arr[y-1])
                {
                    cnt++;
                    flag1=1;
                }
                else if(arr[y]<arr[y-1])
                {
                    flag=1;
                    cnt++;
                }
                else {
                    break;
                }
                }
                else if(flag==1)
                {
                    if(arr[y]<arr[y-1])
                    {
                        cnt++;
                    }
                    else{
                        if(flag1==1)
                        {
                        maxa=max(maxa,cnt+1);
                        }
                        break;
                    }
                } 
            }
            if(flag==1 && flag1==1)
            {
                maxa=max(maxa,cnt+1);
            }
        }
        return maxa;
    }
};