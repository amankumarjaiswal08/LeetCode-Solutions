class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int missing = 1;

        for (int x : nums) {
            if (x == missing)
                missing++;
        }

        return missing;
    }
};