#include <iostream>
#include <vector>
using namespace std;

// Find subsets of given set. total no of subsets of any set is 2^n where n is the no
// of elements in set. example for {1,2,3} we have: [], [1], [1,2], [1,2,3], [2], [2,3],[3]

void findSubsets(vector<int> &A, vector<int> &subset, vector<vector<int>> & res, int index)
{
    res.push_back(subset); //first step to push because you wanna push 'blank' too as blank is also a subset.
    for(int i=index; i < A.size(); i++)
    {
        /*
           push an element from array to your subset vector and recursively
           keep finding it's partners recursively
        */
        subset.push_back(A[i]); 
        findSubsets(A,subset,res,i+1);
        
        //once done, you wanna remove A[i] and give the next index in for loop the chance to
        //similary call recursively. #backtrack
        
        subset.pop_back();
    }
    return;
}


vector<vector<int>>subsetUtil(vector<int> A)
{
    vector<vector<int>> result;
    vector<int> subset;
    findSubsets(A,subset,result,0); 
    return result;
}

int main() {
	// your code goes here
    vector<int> A = {1,2,3};
    auto res = subsetUtil(A);
    for(auto i : res)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
	return 0;
}

