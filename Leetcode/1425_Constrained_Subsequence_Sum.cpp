class Solution {
public:
  
    int constrainedSubsetSum(vector<int>& nums, int k) {
     int n = nums.size(), ans = -1e9;
        
        vector<int> dp(n+1);
        for(int i = 0; i < n; i++)
        {
            dp[i] = nums[i];
            ans = max(ans,dp[i]);
        }
        
        priority_queue<pair<int,int>> pq;
        pq.push({dp[0],0});
        
        for(int i = 1; i < n; i++)
        {
            while(i - pq.top().second > k)pq.pop();
            
            dp[i] = max(dp[i],nums[i] + pq.top().first);
            pq.push({dp[i],i});
            ans = max(ans,dp[i]);
        }
        
        return ans;
    }
};
