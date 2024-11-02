#include <bits/stdc++.h>
using namespace std;

// One Insertion or Deletion will have same impact / similar
bool requiresOneInsertion(string& str1, string& str2)
{
    bitset<256> bits(0);
    for(char c: str1)
    {
        int val = c;
        bits.flip(val);
    }

    for(char c: str2)
    {
        int val = c;
        bits.flip(val);
    }

    return bits.count() == 1;
}

bool requiresOneReplacement(string& str1, string& str2)
{
    bitset<256> bits(0);
    for(char c: str1)
    {
        int val = c;
        bits.flip(val);
    }

    for(char c: str2)
    {
        int val = c;
        bits.flip(val);
    }

    return bits.count() == 2;
}

bool areOneAway(string& str1, string& str2)
{
    if(str1 == str2)
        return true;

    int n1 = str1.length(), n2 = str2.length();
    if(abs(n1-n2) > 1)
        return false;

    return requiresOneInsertion(str1, str2) || requiresOneReplacement(str1, str2);
}

int main()
{
    vector<pair<string, string>> words = {{"pale", "ple"}, {"pales", "pale"}, {"pale", "bale"}, {"pale", "bake"}};

    for(auto it: words)
    {
        string str1 = it.first, str2 = it.second;
        bool res = areOneAway(str1, str2);

        if(res)
            cout<<"True: "<<str1<<" and "<<str2<<" are one/less edit away"<<endl;
        else    
            cout<<"False"<<endl;
    }
    
    return 0;
}