class Solution {
public:
    string compressedString(string word) {
    string w="";
    int i = 0;
    int n = word.length();
    while (i<n) {
        char ch = word[i];
        int cnt = 0;
         while (i <n && word[i] == ch && cnt<9) {
            i++;
            cnt++;
        } 
        w += to_string(cnt) + ch;
    }
    return w;
    }
};