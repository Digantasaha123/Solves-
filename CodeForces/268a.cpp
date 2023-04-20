#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int host[t],guest[t];
    int ans = 0;
 for(int i =0; i<t; i++)
    {
        cin>>host[i]>>guest[i];
    }


    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if(i!=j && host[i]==guest[j]) 
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
