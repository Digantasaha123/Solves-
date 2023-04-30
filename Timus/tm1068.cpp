#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int count = 0;
    if (a == 1 || a == 0)
    {
        cout << 1 << endl;
    }
    else if (a < 0)
    {
        a = abs(a);
        for (int i = 1; i <= a; i++)
        {
            count += i;
        }
        cout << -(count - 1);
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            count += i;
        }
        cout << count;
    }

    return 0;
}