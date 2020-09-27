#include <iostream>
using namespace std;

//Square root of a number using binary search. If exact value not found, return the closest min one.

int findSqrt(int x)
{
    int start = 1;
    int end = x;
    int res;
    
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(mid * mid == x)
        {
            return mid;
        }
        else if(mid*mid < x)
        {
            res = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            
        }
    }
    return res;
}

int main() {
    int x = 17;
    cout << findSqrt(x);
	// your code goes here
	return 0;
}

