//  we need to find out how many times the number appears in the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a'] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // fetch
        cout << hash[c-'a'] << endl;
    }
    return 0;
}

// above code is for lower case if you want to do with upper case just
// change 'a' to 'A'(in the same formula) and if you want to do with both upper and lower case 
// remove hash[s[i]-'a'] to hash[s[i]] and also change int hash[26] to int hash[256]
//  As ASCII AS 256 CHARACTER IN IT