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
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"ANY"<<endl;
        }
        else if(a<b)
        {
            cout<<"REPAIR"<<endl;
        }
        else
        {
            cout<<"NEW PHONE"<<endl;
        }
    }
    return 0;
}