#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isBalanced(string str)
{
    stack<char> stk;
    for(int i=0; i<=str.length()-1; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            stk.push(str[i]);
            continue;
        }
        if(stk.empty())
        {
            return false;
        }
        switch(str[i])
        {
            case '}':
            {
                char top = stk.top();
                stk.pop();
                if(str[i] == '(' || str[i] == '[')
                {
                    return false;
                }
                break;
            }
            case ']':
            {
                char top = stk.top();
                stk.pop();
                if(str[i] == '(' || str[i] == '{')
                {
                    return false;
                }
                break;
            }
            case ')':
            {
               char top = stk.top();
                stk.pop();
                if(str[i] == '{' || str[i] == '[')
                {
                    return false;
                }
                break; 
            }
        }
    }
    return (stk.empty());
    
}

int main() {
	// your code goes here
    string input = "{()}[";
    
    cout << "is Balanced: " << isBalanced(input);
	return 0;
}

