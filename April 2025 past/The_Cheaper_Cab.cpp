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
        if(n==m)
        {
            cout<<"ANY"<<endl;
        }
        else if(n<m)
        {
            cout<<"FIRST"<<endl;
        }
        else
        {
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}