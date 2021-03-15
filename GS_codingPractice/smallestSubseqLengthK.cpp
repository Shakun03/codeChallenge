#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function to find lexicographically
// smallest subsequence of size K
// example: input is "aabdaabc" and k=3. so output would be: "aaa" 


void smallestSubsequence(string& S, int K)
{
    // Length of string
    int N = S.size();
 
    // Stores the minimum subsequence
    stack<char> answer;
 
    for(int i=0; i<N; i++)
    {
        if(answer.empty())
        {
            answer.push(S[i]);
        }
        else
        {
            while(!answer.empty() && S[i]<answer.top() && 
            // do check if there are even enough characters left in the string to store onto the stack length stack
            (N - i) >= answer.size() - K +1)
            {
                answer.pop();
            } // end of while
            
            if(answer.empty() || answer.size()  < K)
            {
                answer.push(S[i]);
            }
            
        }
    }
   
    string ret;
 
    // Iterate until stack is empty
    while (!answer.empty()) {
        ret.push_back(answer.top());
        answer.pop();
    }
 
    // Reverse the string
    reverse(ret.begin(), ret.end());
 
    // Print the string
    cout << ret;
}

int main() {
    string input= "aabdaabc" and k=3. output : "aaa";
    int k =3;
    smallestSubsequence(input, k);
	// your code goes here
	return 0;
}

