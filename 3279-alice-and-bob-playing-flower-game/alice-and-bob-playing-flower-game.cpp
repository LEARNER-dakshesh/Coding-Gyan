class Solution {
public:
    long long flowerGame(int n, int m) {
        long long even_n=n/2;
        long long odd_n=(n+1)/2;
        long long even_m=(m)/2;
        long long odd_m=(m+1)/2;

      long long tot_pair=(even_n*odd_m)+(odd_n*even_m);
      return tot_pair;
    }
};