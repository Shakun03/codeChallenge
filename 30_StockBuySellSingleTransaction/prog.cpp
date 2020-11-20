    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=0;
        int profit = 0;
        int i=0;
        int n = prices.size();
        
        while(i<n-1)
        {
            while(i< n-1 && prices[i+1]<prices[i])
            {
                i++;
            }
            if(i<=n-1 && prices[buy]>prices[i] )
            {
               buy = i; 
            }
            
            while(i < n-1 && prices[i+1] > prices[i])
            {
                i++;
            }
          
              sell = i;
               
            if(sell<=n-1 && profit < prices[sell]-prices[buy])
            {
                profit = prices[sell]-prices[buy];
            }
            i++;
          
        }
        return profit;
    }
