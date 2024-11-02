#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string& str1, string& str2)
{
    if(str1.length() != str2.length())
        return false;

    vector<int> freq(256, 0);
    for(int i=0; i<str1.length(); i++)
    {
        int val = str1[i];
        freq[val]++;
    }

    for(int i=0; i<str2.length(); i++)
    {
        int val = str2[i];
        freq[val]--;

        if(freq[val] < 0)
            return false;
    }

    /* checking for the extra chars or lesser ones
        for(int i=0; i<256; i++)
        {
            if(freq[i] != 0)
                return false;
        }
    */

    return true;
}

int main() {

    string str1 = "testest";
    string str2 = "estxest";

    if(arePermutation(str1, str2))
      cout << str1 <<" and " << str2 << " : permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " : not permutation of each other" << endl;

    str1 = "hello";
    str2 = "oellh";
    if(arePermutation(str1, str2))
      cout << str1 <<" and " << str2 << " : permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " : not permutation of each other" << endl;
}