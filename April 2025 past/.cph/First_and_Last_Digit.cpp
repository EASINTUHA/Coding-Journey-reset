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
        int x=n%10;
        int y=n;
        while(y>=10)
        {
            y=y/10;
        }
        cout<<x+y<<endl;
    }
    return 0;
}