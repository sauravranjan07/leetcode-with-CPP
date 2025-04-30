class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(auto val:nums){
            if(to_string(val).length()%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};