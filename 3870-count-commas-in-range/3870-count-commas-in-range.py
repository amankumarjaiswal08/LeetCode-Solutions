class Solution:
    def countCommas(self, n: int) -> int:
        if n<1000: 
            return 0
        count = 0
        factor = 1000
        while n>=factor:
            count += (n-factor+1)
            factor *= 1000
        return count