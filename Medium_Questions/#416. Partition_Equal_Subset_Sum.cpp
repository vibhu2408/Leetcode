class Solution {
  public:  
    bool solve(int index,vector<int>& nums, int n, int target, vector<vector<int>>& dp) {
        
        if(index >= n)
            return false;
        if(target < 0)
            return false;
        if(target == 0)
            return true;
        
        if(dp[index][target] != -1)
            return dp[index][target];
        
        bool inc = solve(index + 1, nums, n, target - nums[index], dp);
        bool exc = solve(index + 1, nums, n, target - 0, dp);
        
        return dp[index][target] = inc or exc;
    }
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        int target = sum / 2;
        
        if(sum & 1)
            return false;
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return solve(0, nums, n , target, dp);
    }
};
