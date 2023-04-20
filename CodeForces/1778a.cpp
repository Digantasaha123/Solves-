#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define inf 1e18
#define N 100005

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int prod[n + 1];
        prod[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            prod[i] = prod[i - 1] * a[i];
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (prod[n] / prod[i - 1] == prod[i])
            {
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}