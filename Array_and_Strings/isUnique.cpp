#include <bits/stdc++.h>
using namespace std;

bool isUniqueChars(string& str)
{
    bitset<256> bits(0);

    for(int i=0; i<str.length(); i++)
    {
        int val = str[i];
        if(bits.test(val) == 1)   // check if the ith bit is set or not
            return false;
        
        bits.set(val);            // sets the ith bit, Other functions: bits.reset(i), bits.flip(i)
    }

    return true;
}

int main(){
		vector<string> words = {"abcde", "hello", "apple", "kite", "padle"};
		for (auto word : words)
		{
			cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
		}
		
		return 0;
}