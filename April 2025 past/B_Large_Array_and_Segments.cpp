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
        ll n,m,k,sum,ans=0,x,y,z;
        cin>>n>>m>>k;
        vector<ll> v(n),v1(n+1,0),v2(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v1[i+1]=v1[i]+v[i];
        }
        sum=v1[n];
        for(int i=0;i<n;i++)
        {
            ll p=v1[n]-v1[i];
            if(p>=k)
            {
                x=i+1;
                z=n;
                ans=n;
                while(x<=z)
                {
                    y=(x+z)/2;
                    if(v1[y]-v1[i]>=k)
                    {
                        ans=y;
                        z=y-1;
                    }
                    else
                    {
                        x=++y;
                    }
                }
                v2[i]=ans-i;
            }
            else
            {
                x=(k+sum-p-1)/sum;
                y=k-((v1[n]-v1[i])+(x-1)*sum);
                z=lower_bound(v1.begin(),v1.end(),y)-v1.begin();
                v2[i]=n+z+(x-1)*n-i;
            }
        }
        ans=0;
        for(int i=0;i<n;i++)
        {
            y=v2[i];
            sum=m*n-i-y;
            if (sum>= 0)
            {
                x=sum/n;
                if(x>=m)
                {
                    x=--m;
                }
                ++x;
                ans=ans+x;
            }
        }
        cout<<ans<<endl;
    }
    easintuha;
}