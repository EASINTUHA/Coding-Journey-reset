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
        if(n<3)
        {
            cout<<"LIGHT"<<endl;
        }
        else if(n<7)
        {
            cout<<"MODERATE"<<endl;
        }
        else
        {
            cout<<"HEAVY"<<endl;
        }
    }
    return 0;
}