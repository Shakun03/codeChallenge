vector<int> leaders(int a[], int n){
    // code here
    vector<int> leaders;
    int max_so_far = a[n-1];
    leaders.push_back(max_so_far);
    int j=1;
    for(int i=n-2; i>=0; i--)
    {
        if(max_so_far <= a[i])
        {
            max_so_far = a[i];
            leaders.push_back(a[i]);
        }
        
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
