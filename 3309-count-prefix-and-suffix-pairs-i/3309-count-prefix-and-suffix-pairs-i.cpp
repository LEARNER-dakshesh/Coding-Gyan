class Solution {
public:
    bool check(string s1,string s2){ 
        if(s1.length()<=s2.length()){ 
            bool p=false,s=false; 
            int maxi=0; 
            int i=0,j=0; 
            while(i<s1.length()){ 
                if(s1[i]==s2[j]){ 
                    p=true; 
                    maxi++; 
                } 
                i++;
                j++; 
            } 
            i=s1.length()-1; 
            j=s2.length()-1; 
            while(i>=0){ 
                if(s1[i]==s2[j]){ 
                    s=true; 
                    maxi++; 
                } 
                i--;
                j--; 
            } 
            return maxi==2*s1.length() ; 
        } 
        
        return false; 
    } 
    int countPrefixSuffixPairs(vector<string>& words) { 
        int c=0; 
        for(int i=0;i<words.size()-1;i++){ 
            for(int j=i+1;j<words.size();j++){ 
                if(check(words[i],words[j])){ 
                    c++; 
                } 
            } 
        } 
        return c; 
    }
};