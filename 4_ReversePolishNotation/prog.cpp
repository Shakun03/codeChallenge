#include <iostream>
#include <vector>
#include <sstream>
#include<string>
#include<stack>
using namespace std;

int computeRPN(string s)
{
    stringstream ss(s);
    vector<string> vec;
    string word;
    while(ss>>word)
    {
        vec.push_back(word);
    }
    cout << "vec" << endl;
    for(auto i :vec)
    {
        cout << i << " ";
        
    }
    cout << endl;
    stack <int> st;
    
    for(auto i : vec)
    {
      
            if(i == "+")
            {
              
              int x = st.top();
              st.pop();
              int y = st.top();
              st.pop();
              st.push(x + y);
              continue;
            }  
            
            else if (i == "-")
            {
              int x = st.top();
              st.pop();
              int y = st.top();
              st.pop();
              st.push(y - x);
              continue;
            }  
            
            else if(i == "*")
            {
              int x = st.top();
              st.pop();
              int y = st.top();
              st.pop();
              st.push(x * y) ;
              continue;
            }
          
            else if (i == "/")
            {
              int x = st.top();
              st.pop();
              int y = st.top();
              st.pop();
              st.push(x/y);
              continue;
            }
           else
           {
             st.push(stoi(i));
           }
      
    }
    return st.top();
}

int main() {
	// your code goes here
   string RPN = "3 5 + 7 2 - *";
   cout << "Result: " << computeRPN(RPN);
	return 0;
}

