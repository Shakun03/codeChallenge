#include <iostream>
using namespace std;
/*create an output product array with each element being product of 
all elements of input aray except self, without using division operator
and in O(n) complexity, you can use extra space.

Example: given array: [2,3,5,10]
output array: [150,100,60,30]

method 1: a dirty hack: use division indirectly because 
x/y can be written as: x * (pow(y,-1))
so simply find product of the entire array and for each output
array element, divide product by that array element

method 2: use extra space for left array and right array as follows:
*/

void productExceptSelf(int arr[], int n)
{
    
    int * outputArray = new int[sizeof(int) * n];
    int * leftArray = new int[sizeof(int) * n];
    int * rightArray = new int[sizeof(int) * n];
    
    leftArray[0] = 1;
    rightArray[n - 1] = 1;
    
    for(int i =1; i<n; i++)
    {
        leftArray[i] = leftArray[i-1] * arr[i-1];
    }
    
    for(int j=n-2; j>= 0; j-- )
    {
        rightArray[j] = rightArray[j + 1] * arr[j+1];
    }
    
    // once these two are formed, output[i] is simply product of left[i] and right[i]
    
    for(int i =0; i<n; i++)
    {
        outputArray[i] = leftArray[i] * rightArray[i];
        cout << outputArray[i] << " ";
    }
}

int main() {
	// your code goes here
	int arr[] = {2,3,5,10};
	int n =sizeof(arr)/sizeof(int);
	productExceptSelf(arr, n);

	return 0;
}

