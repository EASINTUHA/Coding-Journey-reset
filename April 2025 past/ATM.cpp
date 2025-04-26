#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    float m;
    cin>>n>>m;
    if(n%5==0 && (n+0.50)<=m)
    {
        cout<<fixed<<setprecision(2)<<m-(n+0.5)<<endl; 
    }
    else
    {
        cout<<fixed<<setprecision(2)<<m<<endl;
    }
    return 0;
}