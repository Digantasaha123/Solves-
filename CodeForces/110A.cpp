#include <bits/stdc++.h>
using namespace std;
// hi hi
int main()
{
    long long x;
    cin >> x;

    int count = 0;
    while (x != 0)
    {
        if ((x % 10) == 4 || (x % 10) == 7)
        {
            count = count +1;
        }
        x = x / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}