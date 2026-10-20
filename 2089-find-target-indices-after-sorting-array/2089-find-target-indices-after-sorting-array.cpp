class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        vector<int> result;
        for(int &num : nums){
            if(num<target) count++;
        }
        for(int i=0 ; i<n ;i++){
            if(nums[i]==target){
                result.push_back(count);
                count++;
            }
        }
        return result;
    }
};