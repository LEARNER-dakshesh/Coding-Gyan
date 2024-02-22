class Solution {
public:
    int minimumPartition(string s, int k) {
        string temp=""; long long cnt=0; 
 
    for(int i=0; i<s.size(); i++) 
    {
        temp+=s[i];
 
        long long val = stoll(temp);
 
        if(val<=k) 
        {
            // do nothing
        }
        else
        {
            cnt++;
            temp=s[i]; 
 
            if((s[i]-'0')>k) {
                return -1;
                cout<<-1<<" ";  
                return 0; 
            }
        }
    }
 
    if(temp!="") 
    {
         long long val = stoll(temp);
         if(val<=k) 
        {
           cnt++;
        }
        else
        {
            return -1;
           cout<<-1<<" ";  
                return 0;  
        }
    }
    return cnt;
        // string ne = "";
        // int cnt = 0;
        // for (int x = 0; x < s.size(); x++) {
        //     ne += s[x];
        //     if (stoi(ne) <= k) {
                
        //     } else if (stoi(ne) > k) {
        //         if (s[x] < k) {
        //             cnt++;
        //             ne = s[x];
        //         }
        //         else if(s[x]-'0' > k)
        //         {
        //              return -1; 
        //         }
        //     }
        // }
        // if(ne!="")
        // {
        //     if(stoi(ne)<=k)
        //     {
        //         cnt++;
        //     }
        //     else{
        //     //   return -1;
        //     }
        // }

        // return cnt;
    }
};