class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> set;
        int n = digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==k||i==j||k==j){
                        continue;
                    }
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    if(num>=100 && num%2==0){
                        set.insert(num);
                    }
                }
            }
        }
        
        return set.size();
    }
};