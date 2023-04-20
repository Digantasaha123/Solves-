#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int pos = 0;
    cin >> s >> t;
    for (char insturction : t)
    {
        if (s[pos] == insturction)
        {
            pos++;
        }
    }
    cout<<pos+1;
    return 0;
}