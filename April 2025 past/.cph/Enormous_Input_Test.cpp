#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
        int a;
        cin>>a;
        if(a%k==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}