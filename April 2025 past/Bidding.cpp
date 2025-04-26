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
        int n,m,k;
        cin>>n>>m>>k;
        if(n>=m && n>=k)
        {
            cout<<"Alice"<<endl;
        }
        else if(m>=k)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
    }
    return 0;
}