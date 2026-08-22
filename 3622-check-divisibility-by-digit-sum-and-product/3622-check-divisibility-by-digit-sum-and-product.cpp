class Solution {
public:
    bool checkDivisibility(int n) {
        int original_num = n;
        int sum = 0;
        int product = 1;

        while(n>0){
            int digit = n%10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        if(original_num%(sum+product)==0){
            return true;
        }
        else{
            return false;
        }
    }
};