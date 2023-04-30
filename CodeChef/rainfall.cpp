#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a;
    cin>>x;
    while (x--)
    {  cin>>a;
    if(a<3) cout<<"Light"<<endl;
    else if (a>=3 && a<7) cout<<"MODERATE"<<endl;
    else if (a>=7) cout<<"HEAVY"<<endl;
    }
    return 0;
}