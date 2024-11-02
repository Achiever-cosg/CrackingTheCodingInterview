#include <bits/stdc++.h>
using namespace std;

bool isPalindromePermutation(string& str)
{
    unordered_map<char, int> mpp;
    for(char c: str)
    {
        if(c ==' ')
            continue;
        else    
            mpp[tolower(c)]++;
    }

    bool oddOccurence = false;
    for(auto it: mpp)
    {
        int freq = it.second;
        if(freq%2 != 0)
        {
            if(oddOccurence)
                return false;

            oddOccurence = true;
        }
    }

    return true;
}

// Space Optimized O(1)

bool isPalindromePermutation2(string& str)
{
    bitset<256> bits(0);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
            continue;

        int val = tolower(str[i]);
        bits.flip(val);
    }
    
    if(bits.count() > 1)        // returns the number of set bits 
            return false;
    
    return true;
}

int main()
{
    string str = "Tact Coa";
    bool ans = isPalindromePermutation(str);

    if(ans)
        cout<<"True"<<endl; 
    else 
        cout<<"False"<<endl;    

    string str2("A big Cat");
    bool ans2 = isPalindromePermutation2(str2);

    if(ans2)
        cout<<"True"<<endl; 
    else 
        cout<<"False"<<endl;  

    return 0;
}