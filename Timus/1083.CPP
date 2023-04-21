#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    int k = 0;
    cin>>n>>str;
    for(char  ss : str)
    {
        if(ss=='!')
        {
            k++;
        }
    }

    int ans = 1;
    while(n>0)
    {
     ans*=n;
     n-=k;
    }
cout<<ans;
}