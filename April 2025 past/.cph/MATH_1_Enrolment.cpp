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
        int n,m;
        cin>>n>>m;
        if(m>n)
        {
            cout<<m-n<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}