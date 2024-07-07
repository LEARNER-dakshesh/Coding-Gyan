class Solution {
public:
// int possible(vector<int>&citations,int mid)
// {
//     int c=0;
//     for(int x=0;x<citations.size();x++)
//     {
//         if(citations[x]>=mid)
//         {
//             c++;
//         }
//     }
//     return c;
// }
int hIndex(vector<int>& citations) {
        int low=0;
        int n=citations.size();
        int high=n-1;
        int hIndex = 0;
        while(low<=high)
        {
        int mid=(low+high)/2;
            int diff = n - mid;

            if (citations[mid] >= diff) {
                hIndex = diff;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return hIndex;
}
};