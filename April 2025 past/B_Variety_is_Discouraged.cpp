#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define M                   1000000007
#define LLM                 1000000000000000007
#define easintuha           return 0
#define loop(i,a,b)         for(int i=a;i<b;i++)
ll fact(ll n)                   { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)              { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=M; while(b){ if (b&1) ans = (ans*a) % M; a = (a*a) % M; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,total=0,l=-1,r=-1,i=0,x,y,p=1;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->ss==p)
            {
                st.insert(it->ff);
            }
        }
        for(int j=0;j<n;j++)
        {
            if(st.count(v[j])==0)
            {
                i=j+p;
                continue;
            }
            x=j-i+p;
            if(x>total)
            {
                total=x;
                l=i;
                r=j;
            }
        }
        x=l+p;
        y=r+p;
        if(total==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<endl;
        }
    }
    easintuha;
}