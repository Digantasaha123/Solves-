#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;
    int x = 0;
    for(char ins : t)
    {
        if (s[x]==ins)
        x++;
    }
    cout<<x+1<<endl;
    return 0;
}