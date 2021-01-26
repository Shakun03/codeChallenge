bool comparee(struct val &firstt, struct val &secondd)
{
    
        return (firstt.first < secondd.first);
    
}

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,comparee);
    
    int dp[n] = {1};
    //cout << "dp elements: " << endl;
    for(int i=0; i<n; i++)
    {
        dp[i] = 1;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(p[i].first > p[j].second && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
   return *max_element(dp,dp+n);
}
