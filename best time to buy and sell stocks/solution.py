class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = 1000000
        ans = 0 
        p = 0
        for i in prices:
            if i < low:
                low = i
            p = i - low 
            if ans < p:
                ans = p 
        return ans