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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b<=c)
        {
            cout<<2<<endl;
        }
        else if(a<=c)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}