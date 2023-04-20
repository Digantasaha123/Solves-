#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int flag = 0;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if(array[i]==1)
        {
            cout<<"HARD"<<endl;
           
            flag = 1; 
            break;
        }
    }
    if(flag==0)
    cout<<"EASY"<<endl;
    return 0;
}