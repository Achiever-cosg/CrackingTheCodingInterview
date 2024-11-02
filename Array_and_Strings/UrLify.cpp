#include <bits/stdc++.h>
using namespace std;

string urlify(string& str)
{
    vector<string> words;
    string word = "";

    for(char c: str)
    {
        if(c == ' ')
        {
            if(word.length() > 0)
            {
                words.push_back(word);
                word = "";
            }
        }
        else 
            word += c;
    }

    if(word.length() > 0)
    {
        words.push_back(word);
    }

    string ans = "";
    int n = words.size();
    for(int i=0; i<n-1; i++)
    {
        ans = ans + words[i] + "%20";
    }
    ans += words[n-1];

    return ans;
}

/*  Space optimized approach (length without traling and preceding spaces)

    void urlify(char *str, int len)
    {
        int numOfSpaces = 0;
        int i = 0, j = 0;
        for ( i = 0; i < len; ++i ) {
            if (str[i] == ' ') {
                ++numOfSpaces;
            }
        }
        
        int extendedLen  = len + 2 * numOfSpaces;
        i = extendedLen - 1;
        for( j = len - 1; j >= 0; --j ) {
            if ( str[j] != ' ' ) {
            str[i--] = str[j];
            } else {
                str[i--] = '0';
                str[i--] = '2';
                str[i--] = '%';
            }
        }
    }
*/

int main()
{
    string str = "Mr John  Smith     ";
    cout<<"The acutal string is: "<<str<<endl;

    string res = urlify(str);
    cout<<"The urlified string is: "<<res<<endl;
    
    return 0;
}