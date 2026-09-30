class Solution {
public:
    int t[21][1001];
    int countSubset(int n , int sum , vector<int>& nums){
        if(n==0){
            return (sum==0) ? 1 : 0;
        }
        if(t[n][sum] != -1){
            return t[n][sum];
        }
        int skip = countSubset(n-1,sum,nums);
        int take = 0;
        if(nums[n-1]<=sum)
        take = countSubset(n-1 , sum-nums[n-1] , nums);

        return t[n][sum] = (skip+take);
    }
    int findTargetSumWays(vector<int>& nums, int target){
        memset(t,-1,sizeof(t));
        int n = nums.size();
        int sum = 0;
        target = abs(target);
        for(int &x : nums){
            sum += x;
        }
        if(((sum+target)%2)!=0){
            return 0;
        }
        int s1 = (sum + target)/2;
        return countSubset(n , s1 , nums);
    }
};