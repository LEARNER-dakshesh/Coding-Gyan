class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int x=0;x<score.size();x++)
        {
            pq.push(make_pair(score[x],x));
        }
        int n=score.size();
        vector<string>v(n,"");
        int c=1;
        for(int x=0;x<score.size();x++)
        {
            int top=pq.top().second;
            if(c==1)
            {
             v[top]="Gold Medal";
             c++;
            }
            else if( c==2)
            {
             v[top]="Silver Medal";
             c++;
            }
            else if( c==3)
            {
             v[top]="Bronze Medal";
             c++;
            }
            else
            {
                v[top]=to_string(c);
                c++;
            }
            pq.pop();
        }
        return v;
    }
};