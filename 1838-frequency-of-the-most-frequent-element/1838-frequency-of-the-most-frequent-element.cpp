class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int result = 0;
        int l = 0;
        long currsum = 0;
        for(int i=0;i<nums.size();i++){
            long target = nums[i];
            currsum += nums[i];
            while((i-l+1)*target-currsum>k){
                currsum -= nums[l];
                l++;
            }result = max(result , i-l+1); 
        }
        return result;
    }
};