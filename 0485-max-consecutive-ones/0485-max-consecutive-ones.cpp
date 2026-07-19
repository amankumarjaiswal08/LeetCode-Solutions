class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int count = 0;
        for(int i : nums){
            if(i==1){
                count++;
        }
        else{
            count = 0;
        }
        maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};