class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
      sort(deck.begin(),deck.end());
      queue<int>q;
      for(int x=0;x<deck.size();x++)
      {
         q.push(x);
      }
      vector<int>ans(deck.size());
      for(int x=0;x<deck.size();x++)
      {
          ans[q.front()]=deck[x];
          q.pop();
          if(!q.empty())
          {
            int val=q.front();
            q.pop();
            q.push(val);
          }
      }
      return ans;
    }
};