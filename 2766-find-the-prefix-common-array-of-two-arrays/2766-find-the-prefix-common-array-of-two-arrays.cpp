class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int>m;
        vector<int>v;
        int calc=0;
        for(int x=0;x<A.size();x++)
        {
            if(A[x]==B[x])
            {
                calc++;
            }
            if(m.find(A[x])!=m.end())
            {
                calc++;
            }
             if(m.find(B[x])!=m.end())
            {
                calc++;
            }
            v.push_back(calc);
            m[A[x]]++; 
            m[B[x]]++;
        }
        return v;
    }
};