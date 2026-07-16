class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> ans;
       for(int i=0;i<n;i++){
       ans.insert(ans.end(), {nums[i], nums[i+n]});
       }
       return ans;
    }
};