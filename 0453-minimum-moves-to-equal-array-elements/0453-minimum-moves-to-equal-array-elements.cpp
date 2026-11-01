class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = accumulate(begin(nums) , end(nums) ,0);
        int min_num = *min_element(begin(nums) , end(nums));
        return sum-nums.size()*min_num;
    }
};