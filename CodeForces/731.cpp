#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    char initialposition = 'a';
    int ans = 0;
    
    for(int i=0; i<word.size(); i++)
    {
        int temp = min(abs(initialposition -  word[i]), 26-abs(initialposition -  word[i]));
        ans +=temp;
        initialposition = word[i];
    }
    cout<<ans;
    return 0;
}