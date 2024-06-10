class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        unordered_map<string, int> pos_mp;
        unordered_map<string, int> neg_mp;

        for (int x = 0; x < positive_feedback.size(); x++) {
            pos_mp[positive_feedback[x]]++;
        }

        for (int x = 0; x < negative_feedback.size(); x++) {
            neg_mp[negative_feedback[x]]++;
        }
  auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) return a.second > b.second; 
            return a.first < b.first; 
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);

        for (int x = 0; x < report.size(); x++) {
            int points = 0;
            istringstream iss(report[x]);
            string word;
            while (iss >> word) {
                if (pos_mp.find(word) != pos_mp.end()) {
                    points += 3;
                } else if (neg_mp.find(word) != neg_mp.end()) {
                    points -= 1;
                }
            }
            pq.push({points, student_id[x]});
        }

        vector<int> v;
        while (!pq.empty() && k > 0) {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v;
    }
};