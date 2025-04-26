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
        a=a-c;
        b=b-d;
        if(a==b)
        {
            cout<<"Any"<<endl;
        }
        else if(a<b)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }
    }
    return 0;
}