class Solution {
public:
    int myAtoi(string s) {
        bool flag = false;
        int n = s.size(),i=0;
        
        while (i<n && s[i]==' ') {
            i++;
        }

        if (i<n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                flag = true;
            }
            i++;
        }

        long long num = 0;
        while (i<n && isdigit(s[i])) {
            int dig = s[i]-'0';
            
            num = num*10+dig;
            if (num > INT_MAX) {
                return flag ? INT_MIN:INT_MAX;
            }

            i++;
        }

        return flag ? -num : num;
    }
};
