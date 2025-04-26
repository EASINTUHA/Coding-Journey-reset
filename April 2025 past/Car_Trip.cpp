#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<300)
        {
            cout<<3000<<endl;
        }
        else
        {
            cout<<n*10<<endl;
        }
    }
    return 0;
}