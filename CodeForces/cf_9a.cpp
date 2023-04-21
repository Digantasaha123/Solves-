#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w, y;
    cin>>w>>y;
    int x = 6-max(w,y)+1;
    int d = __gcd(6,x);
    cout<<x/d<<"/"<<6/d<<endl;
    return 0;
}