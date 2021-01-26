// Find min number of operations needed to reach 'n' from 0 if only operations allowed are:
// add 1 or double the number
// example: for reaching 3, you will first add 1 to 0 then you will add another 1 to make it 2 and then another 1 to make it 3
// but to reach 4, you simply double the 2 after youve reached 2 already with 2 steps. so total 3 steps.
// use the above pattern to create a simple DP approach for odd and even numbers
int minOperation(int n)
    {
        //code here.
        int dp[n+1] = {0};
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3;i<=n; i++)
        {
            if(i%2 == 1)
            {
                dp[i] = dp[i-1] + 1;
            }
            else
            {
                dp[i] = dp[i/2] + 1;
            }
        }
        return dp[n];
    }
