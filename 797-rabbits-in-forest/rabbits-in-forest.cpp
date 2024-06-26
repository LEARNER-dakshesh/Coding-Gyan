class Solution {
public:
    int numRabbits(vector<int>& answers) {
       sort(answers.begin(),answers.end());
       int cnt=0;
       int curr=answers[0];
       int times=curr;
       cnt+=answers[0]+1;
       for(int x=1;x<answers.size();x++)
       {
        if(answers[x]==curr && times>0)
        {
           times--;
        }
        else{ 
            curr=answers[x];
            times=answers[x];
            cnt+=curr+1;
        }
       } 
       return cnt;
    }
};