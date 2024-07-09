class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double  start=(customers[0][0]+customers[0][1]);
        double wait=start-customers[0][0];
        cout<<start<<" "<<wait<<endl;
        // cout<<start<<endl;
        int n=customers.size();
        // cout<<n<<endl;
        for(int x=1;x<customers.size();x++)
        {
           if(start>=customers[x][0])
           {
            start+=customers[x][1];
            wait+=(start-customers[x][0]);
            cout<<start<<" "<<wait<<endl;
           }
           else{
              start=customers[x][0]+customers[x][1];
             wait+=customers[x][1];  
           }
        }

        return wait/(n)*1.0;
    }
};