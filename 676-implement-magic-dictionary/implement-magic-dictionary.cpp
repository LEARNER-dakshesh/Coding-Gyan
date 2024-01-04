class MagicDictionary {
public:
map<string,int>mp;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        for(int x=0;x<dictionary.size();x++)
        {
            mp[dictionary[x]]++;
        }
    }
    
    bool search(string sW) {
    string k=sW;
        for(int x=0;x<sW.size();x++)
        {
            int c=0;
            for(int y=97;y<=122;y++)
            {
                if(sW[x]!=(char)y)
                {
                    c=1;
                }
              sW[x]=(char)y;
            //   cout<<sW<<" ";
              if((mp.find(sW)!=mp.end()) && (c==1))
              {
                  return true;
              }
                
              else{
                  c=0;
                  sW=k;
              }
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */