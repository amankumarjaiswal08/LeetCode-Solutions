class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int j = 1;
        int n = nums.size();
        bool found = true;
        while(true){
            found = false;
        for(int i=0;i<n;i++){
            if(j*k==nums[i]){
                 found = true;
                break;
            }}
            
            if(found){
                j++;
            }
            else{
                return k*j;
            }
        
    }
    }
};