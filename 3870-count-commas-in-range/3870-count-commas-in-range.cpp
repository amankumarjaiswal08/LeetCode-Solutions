class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int count = 0 ;
        long long factor = 1000;
        while(n>=factor){
            count += (n-factor+1);
            factor *= 1000;
        }
        return count;
    }
};