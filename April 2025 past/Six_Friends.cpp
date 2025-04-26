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
        if(3*n>2*m)
        {
            cout<<2*m<<endl;
        }
        else
        {
            cout<<3*n<<endl;
        }
    }
    return 0;
}