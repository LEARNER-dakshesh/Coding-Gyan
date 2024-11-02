class Solution {
public:
    bool isCircularSentence(string sentence) {
        string s1="";
        for(int x=0;x<sentence.size();x++)
        {
            if(x==0 || x== sentence.size()-1)
            {
                s1+=sentence[x];
            }
            if(sentence[x]==' ')
            {
                s1+=sentence[x-1];
            }
            if(x>0 && sentence[x-1]==' ')
            {
                s1+=sentence[x];
            }
        }
        cout<<s1<<endl;
        for(int x=1;x<s1.size()-1;x=x+2)
        {
            if(s1[x]!=s1[x+1])
            {
                // cout<<x<<endl;
                return false;
            }
        }
        int l1=s1.size()-1;
        return s1[0]==s1[l1] ? true : false;
        
    }
};