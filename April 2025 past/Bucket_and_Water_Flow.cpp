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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a=a+(c*d);
        if(a>b)
        {
            cout<<"overFlow"<<endl;
        }
        else if(a==b)
        {
            cout<<"filled"<<endl;
        }
        else
        {
            cout<<"Unfilled"<<endl;
        }
    }
    return 0;
}