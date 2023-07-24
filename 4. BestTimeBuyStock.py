class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        low = prices[0]
        best = 0
        day = 0
        for i in range(len(prices)):
            if i == 0: continue
            if prices[i] < low: low = prices[i]
            if prices[i] - low > best: 
                day = i + 1
                best = prices[i] - low
        return best