#include <iostream>
#include<vector>

using namespace std;

// Find squares of a sorted array which may have negative numbers too, and keep the result sorted too!
//using O(n) time complexity with extra space.

vector<int> squares(vector<int> iVec)
{
  
    int aVecSize = iVec.size();
    vector<int> aVec(aVecSize);
    int aVecStart = 0;
    int aVecEnd = aVecSize - 1;
    
    for(int i=aVecSize-1; i>=0; i--)
    {
        if(abs(iVec[aVecStart]) > abs(iVec[aVecEnd]))
        {
            aVec[i] = iVec[aVecStart] * iVec[aVecStart];
            aVecStart ++ ;
        }
        else
        {
            aVec[i] = iVec[aVecEnd] * iVec[aVecEnd];
            aVecEnd --;
        }
    }

    return aVec;
}

vector<int> fun(vector<int> v)
{
    
    return v;
}

int main() {
	// your code goes here
	vector<int> vec= {-4,-1,0,3,10};
	vector<int> res;
    res = squares(vec);
	cout << "Result: \n";
	for(auto it: res)
	{
	    cout << it << " ";
	}
	
	return 0;
}

