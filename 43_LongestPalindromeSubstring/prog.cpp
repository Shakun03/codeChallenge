#include <iostream>
using namespace std;

void printSubStringResult(string str, int start, int len)
{
    int i = start;
    for(int i =start; i<=len ;i++)
    {
        cout << str[i];
    }
}

void longestPalindromeSubstring(string str)
{
    int start =0;
    int maxlength = 1;
    for(int i =1; i<str.length(); i++)
    {
        int low = i-1;
        int high = i;
        
        
        //longest even palindrome for i:
        while(low>=0 && high<str.length() && str[low] == str[high])
        {
            if(high-low+1 > maxlength)
            {
                start = low;
                maxlength = high-low+1;
            }
            high ++;
            low --;
        }
        // longest odd palindrome for i:
        low = i-1;
        high = i+1;
        while(low>=0 && high<str.length() && str[low] == str[high])
        {
            if(high-low+1 > maxlength)
            {
                start = low;
                maxlength = high-low+1;
            }
            high ++;
            low --;
        } 
        
    }
    
    printSubStringResult(str, start, start + maxlength -1);
}

int main() {
    int T;
    string str;
    cin >> T;
    while(T--)
    {
        str = "";
        cin >> str;
        longestPalindromeSubstring(str);
        cout << endl;
    }
	//code
	return 0;
}
