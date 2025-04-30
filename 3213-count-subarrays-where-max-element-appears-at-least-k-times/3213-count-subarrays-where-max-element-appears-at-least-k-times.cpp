class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int maxi = *max_element(nums.begin(), nums.end());
        long long count=0;
        int left=0, cnt=0;
        int n=nums.size();
        for(int right=0; right<n; ++right)
        {
            if(nums[right]==maxi)
                cnt++;
            while(cnt>=k)
            {
                count+=(n-right);
                if(nums[left]==maxi)
                    cnt--;
                left++;
            }
        }
        return count;
    }
};