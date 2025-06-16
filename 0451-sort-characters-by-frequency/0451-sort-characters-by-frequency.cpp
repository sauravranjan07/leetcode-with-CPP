typedef pair<char, int> p;

class compare {
public:
    bool operator()(p p1, p p2) {
        return p1.second <
               p2.second; 
    }
};

class Solution {
public:
    string frequencySort(string s) {
        priority_queue<p,vector<p>,compare> pq;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            if (mp.find(s[i]) != mp.end()) {
                mp[s[i]]++;
            } else {
                mp[s[i]] = 1;
            }
        }
        for (auto& it : mp) {
            pq.push({it.first,it.second});
        }
        string ans;
        while (!pq.empty()) {
            auto temp = pq.top();
            pq.pop();
            while (temp.second) {
                ans += temp.first;
                temp.second--;
            }
        }
        return ans;
    }
};