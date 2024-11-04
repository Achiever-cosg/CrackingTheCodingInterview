#include <bits/stdc++.h>
using namespace std;

string compressString(string& str)
{
    if(str.size() <= 1)
        return str;

    string res = "";
    unordered_map<char, int> mpp;
    for(char c: str)
    {
        mpp[c]++;
    }

    for(auto it: mpp)
    {
        int freq = it.second;
        res += it.first + to_string(freq);
    }

    return (res.length() >= str.length()) ? res : str;
}

int main()
{
    string str, res;
	cout << "Enter a string:\n";
	cin >> str;
	res = compressString(str);
	
    cout<<"The resultant string is: "<<res<<endl;
	return 0;
}