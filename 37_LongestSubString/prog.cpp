#include <iostream>
using namespace std;

int LCSubStr(char *X, char *Y, int m, int n) 
{ 
	// Create a table to store lengths of longest 
	// common suffixes of substrings. Note that 
	// LCSuff[i][j] contains length of longest 
	// common suffix of X[0..i-1] and Y[0..j-1]. 

	int LCSuff[m+1][n+1];  // yes its gotta be m+1, j+1. every row is like length until there, check gfg to understand the algo
	int result = 0; // To store length of the 
					// longest common substring 

	/* Following steps build LCSuff[m+1][n+1] in 
		bottom up fashion. */
	for (int i=0; i<=m; i++) 
	{ 
		for (int j=0; j<=n; j++) 
		{ 

			// The first row and first column 
			// entries have no logical meaning, 
			// they are used only for simplicity 
			// of program 
			if (i == 0 || j == 0) 
				LCSuff[i][j] = 0; 

			else if (X[i-1] == Y[j-1]) 
			{ 
				LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
				result = max(result, LCSuff[i][j]); 
			} 
			else LCSuff[i][j] = 0; 
		} 
	} 
	return result; 
} 



int main() {
	//code
	int T=0;
	int m,n;

	cin >> T;
	while(T--)
	{
	    cin >> m >> n;
	    char str1[m];
     	char str2[n];
	    cin >> str1 >> str2;
	  
	    //cout << "str1: " << str1 << " str2: " << str2 << " m: " << m << " n: " << n;
	    //fun(str1, str2, m, n);
	    cout << LCSubStr(str1,str2,m,n);
	    cout << endl;
 
	    
	}
	return 0;
}
