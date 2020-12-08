#include <iostream>
using namespace std;

/*Check if a string is a rotation of another string, now it can be any rotation so there are 
numerous possibilities. Hence a simpler logic would be to concatenate original string with itself.
and if the given string to check is a substring of this concatenated string, return true*/

bool isRotation(string s1, string s2)
{
    string temp = s1+s1;
    
    if(temp.find(s2) != string::npos)
    {
        return true;
    }
    return false;
}


int main() {
	// your code goes here
    string mainString = "SHAKUN";
    string str1 = "KUNSHA"; // yes
    string str2 = "KUNASH"; // no
    cout << isRotation(mainString,str1) << endl << isRotation(mainString,str2);
	return 0;
}

