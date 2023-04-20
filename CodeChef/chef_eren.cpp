#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,even,odd,ans=0;
        cin>>n>>even>>odd;
        for(int i=1; i <=n; i++)
        {
            
            if(i%2)
            {
                ans+=even;
            }
            else 
            {
                ans+=odd;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
