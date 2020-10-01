#include <iostream>

// Simple Kadane's algo.
// Find max profit, assuming you are allowed to buy and sell only once
using namespace std;

int maxProfit(int arr[], int n)
{
int buy = arr[0];
int sell;
int max_profit_so_far = -1;
int profit=0;

for(int i=1; i<n; i++)
{
  if(buy < arr[i])
  {
     sell = arr[i];
	 profit = sell - buy;
  }
  else
  {
     buy = arr[i];
  }
  if(max_profit_so_far < profit)
  {
     max_profit_so_far = profit;
  }
}

return max_profit_so_far;
}

int main() {
	// your code goes here
int arr[] = {7,6,4,3,10,21};
int sz  = sizeof(arr)/sizeof(int);
cout << maxProfit(arr,sz);
return 0;
}

