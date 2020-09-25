#include <iostream>
#include<vector>
#include<map>
using namespace std;
// top k freq elements

void printTopK(vector<int> vec, int k)
{
    map<int,int> mp;
    for(const auto & itr : vec)
    {
        if(mp.find(itr) == mp.end()) // if element not already found
        {
          mp.insert({itr,1});
        }  
        else
        {
            mp[itr] ++;
        }
    }
    multimap<int,int> mm;
    
    for(const auto & itr : mp)
    {
        mm.insert({itr.second, itr.first});
    }
    
    multimap<int,int>::reverse_iterator it;
    int i = 0;
    for(it = mm.rbegin(); it != mm.rend(); it++)
    {
        if(i<k)
        {
            cout << "element: " << it->second << " freq: " << it->first << endl;
        }
        else
        {
            break;
        }
        i++;
    }
}

int main() {
	// your code goes here
	vector <int> v ={5, 1, 3, 1, 5, 3, 4, 5};
	
	int k = 2;
	printTopK(v, k);
	return 0;
}

