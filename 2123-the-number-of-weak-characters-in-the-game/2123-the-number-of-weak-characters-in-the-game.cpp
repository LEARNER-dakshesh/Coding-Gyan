class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
          sort(properties.begin(), properties.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1]; 
            }
            return a[0] < b[0]; 
        });


        int cnt=0;
        int maxa=0;
        for(int x=properties.size()-1;x>=0;x--)
        {
            // cout<<properties[x][0]<<" "<<properties[x][1]<<endl;
            if(properties[x][1]<maxa)
            {
                cnt++;
            }
            else
            {
                maxa=max(maxa,properties[x][1]);
            }
        }

        return cnt;
    
    }
};