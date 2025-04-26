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
        if(n<=70)
        {
            cout<<0<<endl;
        }
        else if(n<=100)
        {
            cout<<500<<endl;
        }
        else
        {
            cout<<2000<<endl;
        }
    }
    return 0;
}