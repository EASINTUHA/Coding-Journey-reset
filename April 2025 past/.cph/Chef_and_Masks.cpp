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
        if(n*100>=m*10)
        {
            cout<<"Cloth"<<endl;
        }
        else
        {
            cout<<"Disposable"<<endl;
        }
    }
    return 0;
}