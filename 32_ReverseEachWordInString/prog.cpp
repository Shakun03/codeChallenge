#include <iostream>
#include <sstream>
#include <bits/stdc++.h> 
using namespace std;

/* reverse each word of the string separated by ,
abc,def,ghj becomes: cba,fed,jhg
*/


string reverseEachWordString(string s1)
{
    stringstream ss(s1);
    string word;
    string output;
    while(getline(ss,word,','))
    {
        reverse(word.begin(),word.end());
        output = output + word;
        output = output+ ",";
    }
    output.pop_back();
    return output;
}

int main() {
	// your code goes here
    string mainString = "SHAKUN,BEETAN";
    cout << reverseEachWordString(mainString);
	return 0;
}

