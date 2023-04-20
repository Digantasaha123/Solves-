#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int array[4];
    for (int  i = 0; i < 4; i++)
    {
        cin>>array[i];
    }
    sort(array, array+4);
    for(int i=0; i<3; i++)
    {
        if(array[i]==array[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}