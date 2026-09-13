class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = x;
        int sum = 0;
        while(num>0){
            int digit = num%10;
            num /= 10;
            sum += digit;
            }  
            
            if(x%sum==0){
                return sum;
        }
        return -1;
    }
};