class Solution {
public: 
bool calc(vector<pair<long long,long long>>&intervals,int score) {
        int n=intervals.size();
        long long prev=intervals[0].first;
        
        for (int i=1;i<n;i++) {
            prev=max(prev+score, intervals[i].first);
            if (prev>intervals[i].second) {
                return false;
            }
        }
        
        return true;
    }
    int maxPossibleScore(vector<int>& start,int d) {
        int n=start.size();
        vector<pair<long long, long long>> intervals;
        
        for (int i=0;i<n;i++) 
        {
            intervals.push_back({start[i],(long long)start[i] + d});
        }
        
        sort(intervals.begin(), intervals.end());
        
        int left=0,right=2e9;
        int result=0;
        
        while (left<=right)
        {
            int mid=left+(right-left)/2;
            
            if(calc(intervals,mid)) 
            {
                result=mid;
                left=mid+1;
            } 
            else
            {
                right=mid-1;
            }
        }
        
        return result;
    }
    
   
};