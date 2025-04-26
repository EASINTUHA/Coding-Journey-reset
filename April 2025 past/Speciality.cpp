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
        int n,m,k;
        cin>>n>>m>>k;
        if(n>m && n>k)
        {
            cout<<"Setter"<<endl;
        }
        else if(m>n && m>k)
        {
            cout<<"Tester"<<endl;
        }
        else if (k>n && k>m)
        {
            cout<<"Editorialist"<<endl;
        }
    }
    return 0;
}