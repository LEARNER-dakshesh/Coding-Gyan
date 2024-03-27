class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       int score=0;
       sort(tokens.begin(),tokens.end());
       int j=tokens.size();
       for(int x=0;x<tokens.size() && x<j;x++)
       {
        if(tokens[x]<=power)
        {
            power-=tokens[x];
            score+=1;
        }
        else{
            if(score>0 && x<=j-2)
            {
            score-=1;
            j=j-1;
            power+=tokens[j];
            x-=1;
            }
        }
       }
       return score;
    }
};