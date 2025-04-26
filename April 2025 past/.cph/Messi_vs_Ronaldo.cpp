#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    n=n*2+m;
    m=p*2+q;
    if(n==m)
    {
        cout<<"Equal"<<endl;
    }
    else if(n>m)
    {
        cout<<"Messi"<<endl;
    }
    else
    {
        cout<<"Ronaldo"<<endl;
    }
    return 0;
}