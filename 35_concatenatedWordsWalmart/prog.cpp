#include <iostream>
#include<vector>
#include <set>
#include <algorithm>

using namespace std;

// concatenated words: https://www.youtube.com/watch?v=PY1LSBx-cNs
// check it out for further optimizations on this recursive code

bool isValid(string word, set<string> wordsSet)
{
    
    for(int i=1; i<word.length(); i++)
    {
        string left = word.substr(0,i);
        string right = word.substr(i);
        
        if(find(wordsSet.begin(), wordsSet.end(), left) != wordsSet.end())
        {
            
            if(find(wordsSet.begin(), wordsSet.end(),right) != wordsSet.end() || isValid(right, wordsSet))
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}

vector<string> concatenatedWords(vector<string> words)
{
    set<string> wordsSet (words.begin(), words.end());
    
    vector<string> aResult;
    for(auto word: wordsSet)
    {
        if(isValid(word, wordsSet))
        {
            aResult.push_back(word);
        }
    }
    return aResult;
}


int main() {
	// your code goes here
	vector<string> words = {"shakun", "sanchit" ,"sanchitsim", "sanchitsimer", "simer" , "tanisha", "tanishashakun" };
    auto aResult = concatenatedWords(words);
    cout << "Output is " << endl;
    for(auto i : aResult)
    {
        cout << i << " ";
    }
	return 0;
}

