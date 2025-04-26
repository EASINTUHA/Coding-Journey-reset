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
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<"BRONZE"<<endl;
        }
        else if(n<7)
        {
            cout<<"SILVER"<<endl;
        }
        else
        {
            cout<<"GOLD"<<endl;
        }
    }
    return 0;
}