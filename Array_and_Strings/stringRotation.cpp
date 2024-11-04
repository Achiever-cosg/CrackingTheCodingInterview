#include <bits/stdc++.h>
using namespace std;

/* Approach:
 * example s1 = "waterbottle", and s2 = "erbottlewat", clearly s2 is rotation of s1.
 * lets say s1 = xy ==> wat + erbottle
 * similarly s2 = yx ==> erbottle + wat
 * Therefore s1s1 = "waterbottlewaterbottle", clearly s2 is substring of s1s1
 * So if a string is formed by rotation of another string, it will always be substring of concatenated original string to itself.
 */

bool isRotation(string&s1, string& s2)
{
    if(s1.length() != s2.length())
        return false;

    string temp = s1 + s1;
    if(temp.find(s2) == string::npos)
        return false;
    
    return true;
}

int main() {
	string s1, s2;
	cout << "Enter string 1 : ";
	cin >> s1;
	cout << "Enter string 2 : ";
	cin >> s2;
	if ( isRotation(s1, s2) ) {
		cout << "Yes! " << s2 << " is rotation of " << s1 << endl;
	} else {
		cout << "No! " << s2 << " is not a rotation of " << s1 << endl;
	}
	return 0;
}