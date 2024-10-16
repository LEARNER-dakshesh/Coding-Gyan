class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
     priority_queue<pair<int,int>>pq;
     if(a>=1)
     {
     pq.push({a,'a'});
     }
     if(b>=1)
     {
     pq.push({b,'b'});
     }
     if(c>=1)
     {
     pq.push({c,'c'}); 
     }

     string ans;
     while(pq.size() != 0){
        char curL = pq.top().second;
        int occL = pq.top().first;
        
        pq.pop();
        
        if(ans.size() == 0 || ans.back() != curL){
            int times = 0;
            times = min(occL, 2);
            for(int i=0; i<times;i++){
                ans += curL;
            }
            occL -= times;
            if(occL > 0){
                pq.push({occL, curL});
            }
        }
        else
        {  
            if(pq.size() == 0){
                break;
            }
            char curS = pq.top().second;
            int occS = pq.top().first;
            pq.pop();

            ans += curS;
            occS--;
            if(occS > 0)
            {
                pq.push({occS, curS});
            }
            pq.push({occL, curL});            
        }
    }
     return ans;
    }
};