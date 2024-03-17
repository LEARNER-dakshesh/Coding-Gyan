class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int s = 0;
        for(int num : nums) {
            int maxa=0;
            int temp = num;
            int c=0;
            while(temp>0) {
                int b = temp % 10;
                maxa = max(maxa, b);
                temp/=10;
                c++;
            }
            // string en =string(to_string(num).size(), maxa + '0');
            // num =stoi(en);
            int r=0;
            while(c--)
            {
               r=(r*10)+maxa;
            }
            s+=r;
        }
        return s;
    }
};