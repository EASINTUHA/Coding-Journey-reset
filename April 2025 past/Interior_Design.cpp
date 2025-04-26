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
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        n=n+m;
        p=p+q;
        if(n>p)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}