
// Function to find equilibrium point
// a: input array
// n: size of array
// aim is to find equilibrium point that is an index on left of which the sum is same as that in the right
// cool fun simple efficient solution
int equilibriumPoint(long long a[], int n) {
    int sum=0;
    int leftsum = 0;
    
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        sum -= a[i]; //basically rightsum from index i
        if(leftsum == sum)
        {
            return i+1;
        }
        leftsum += a[i];
    }
    // Your code here
    return -1;
}
