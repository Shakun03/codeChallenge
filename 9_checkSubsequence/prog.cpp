#include <iostream>
using namespace std;
// when order of subsequence is same in main string, not necessarily same substring

int isSubseq(string str, string sub)
{
    int m = str.size();
    int n = sub.size();
    int j =0;
    
    for(int i=0; i<m && j<n; i++)
    {
        if(str[i] == sub[j])
        {
            j++;
        }
    }
    
    return (j==n);
}


int main() {
	// your code goes here
    string str="hello";
    string sub="hl";
    cout << isSubseq(str, sub);
	return 0;
}

