class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num==0 && digit==0){
                count++;
                continue;
            }
            while(num>0){
            int div=num%10;
            if(div==digit){
                count++;
            }
            num /= 10;
        }
        }
        return count;
    }
};