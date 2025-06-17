class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                        {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int totalSum = 0, prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = map[s[i]];

            if (currValue >= prevValue)
                totalSum += currValue;
            else
                totalSum -= currValue;

            prevValue = currValue;
        }

        return totalSum;
    }
};