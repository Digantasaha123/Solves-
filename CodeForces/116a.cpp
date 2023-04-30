#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int current = 0;
    int in[t], out[t];

    for(int i=0; i<t; i++)
    {
        cin>>out[i]>>in[i];
        if(i==0) {
            current = out[0];
        }
    }
    int max = 0;
     for(int i=0; i<t; i++)
    {
        
        current = current - out[i] +  in[i];
        if(max<current) max = current;
    }
    cout<<max;
    return 0;
}