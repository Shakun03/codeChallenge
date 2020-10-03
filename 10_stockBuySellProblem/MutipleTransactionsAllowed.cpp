#include <iostream>
using namespace std;
// Stock buy sell, multiple transactions allowed.

void stockBuySell(int arr[], int n)
{
    if(n == 1)
    {
        return;
    }
    int i =0;
    int buy = 0;
    int sell =0;
    
    while(i < n-1)
    {
        // find local minima for buy until n-1 .
        while(i<n-1 && arr[i+1] <= arr[i])
        i++;
        
        buy = i;
        
        if(i== n-1)
        break;
        
        i++;
        //find local maxima for sell until n
        while(i<n && arr[i - 1] <= arr[i])
        i++;
        
        sell = i - 1;
        
        cout << " Buy at: " << arr[buy] ;
        cout << "  Sell at: " << arr[sell] << endl;
        
    }
}

int main() {
	// your code goes here
	
	int arr[] = {100, 180, 260, 310, 40, 535, 695};
	int n = sizeof(arr)/sizeof(int);
	
	stockBuySell(arr, n);
	
	return 0;
}

