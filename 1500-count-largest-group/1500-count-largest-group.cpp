class Solution {
public:
    int get_sum(int n) {
        int sum = 0;
        while (n) {
            int rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int maxi = 0;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int res = get_sum(i);
           mp[res]++;
            maxi = max(maxi, mp[res]);
        }
        for (auto it : mp) {
            if (it.second == maxi) {
                cnt++;
            }
        }
        return cnt;
    }
};