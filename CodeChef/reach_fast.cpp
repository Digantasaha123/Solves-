#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int a,b,k;
        cin>>a>>b>>k;
        if(a<b) swap(a,b);
        a=a-b;
        if(b%k==0) k=b/k;
        else k=(b/5)+1;
        cout<<k<<endl;
    }

    return 0;
}