class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
         vector<int> ans;

        for (int i = min; i <= max; i++) {
            if (!binary_search(nums.begin(), nums.end(), i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};