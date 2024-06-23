class Solution {
public:
    
    #define ll long long
    
    long long maximumTotalCost(vector<int>& nums) {
        
        const int n = int(nums.size());
        const ll inf = 1e15;
        
        vector<vector<ll>> dp(n, vector<ll>(2, -inf));
        
        dp[0][0] = nums[0];
        dp[0][1] = nums[0];
        
        for (int i = 1; i < n; ++i) {
            dp[i][0] = dp[i - 1][1] - nums[i];
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + nums[i];
        }
        return max(dp[n-1][0], dp[n-1][1]);
    }

};
