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
        int p=n-m;
        float a=1.10*n;
        n=a-p;
        cout<<n<<endl;
    }
    return 0;
}