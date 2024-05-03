class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>time;
        for(int x=0;x<position.size();x++)
        {
           double dis=target-position[x];
           double state = static_cast<double>(dis) / speed[x];
           time.push_back(state);
        }
       vector<pair<int, double>> p;
        for(int x=0;x<position.size();x++)
        {
            p.push_back(make_pair(position[x], time[x]));
        }

        sort(p.rbegin(),p.rend());
        double t1=p[0].second;
        int count=1;
        cout<<endl;
        for(auto it=p.begin()+1;it!=p.end();it++)
        {
            double t2=it->second;
            if(t2>t1)
            {
                t1=t2;
                count+=1;
            }
        }
        return count;
    }
};