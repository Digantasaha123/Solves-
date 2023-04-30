#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,a;
    cin >> t;
    while (t--)
    {
      cin>>a>>b;
      if (a==b) cout<<"Yes"<<endl;
      else{
        if (a<b){
            if ((b-a)%2==0) {
                cout<<"Yes"<<endl; 
        }  
        else cout<<"No"<<endl;  
      }
      else {
        if ((a-b)%2==0) {
                cout<<"Yes"<<endl; 
        }  
        else cout<<"No"<<endl; 
      }
    }
    }
    return 0;
}