class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minElement = min_element(begin(nums),end(nums))-begin(nums);
        int maxElement = max_element(begin(nums),end(nums))-begin(nums);

        int l = min(minElement,maxElement);
        int r = max(minElement,maxElement);

        return min({l+1+n-r,r+1,n-l});
    }
};