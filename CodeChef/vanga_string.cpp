#include <bits/stdc++.h>
using namespace std;
auto solve()
{
    int n;
    string str;


        cin >> n;
        cin >> str;

        if (n % 2 == 0)
        {
            for (int i = 0, j = n / 2; j < n; i++, j++)
            {
                if (str[i] != str[j])
                {
                    cout << "NO" << endl;
                    return ;
                }
                
            }
        cout << "Yes" << endl;
}}
int main()
{
    
    int x, n;
    cin >> x;
    while (x--)
    {
        solve();
    }
    return 0;
}