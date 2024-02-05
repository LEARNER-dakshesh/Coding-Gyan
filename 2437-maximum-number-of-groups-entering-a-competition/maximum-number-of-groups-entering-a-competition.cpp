class Solution {
public:

    int maximumGroups(vector<int>& grades) {
    sort(grades.begin(),grades.end());
    int store=0;
    int cnt1=0,cnt2=0,gp=0;
    int sum =0;
    
    for(int x=0;x<grades.size();x++)
    {
        sum+=grades[x];
        cnt2++;
         if(sum>store && cnt2>cnt1)
         {
             cout<<sum<<" ";
             cnt1=cnt2;
             store=sum;
             sum=0;
             cnt2=0;
             gp++;
         }
    }
    return gp;
    }
};