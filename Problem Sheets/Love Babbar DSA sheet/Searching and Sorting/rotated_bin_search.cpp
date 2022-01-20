#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;

ll MOD = 998244353;
double eps = 1e-12;

#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i <= e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define inf 2e18
#define nl cout << ln
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
void solve();
int binSearch(vector<int>&x, int n,int l, int r);

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   solve();

   return 0;
}
int binSearch(vector<int>&x, int l, int r,int item)
{
    int mid=0;
    if(l<=r)
    {
        mid=l+(r-l)/2;
        if(item==x[mid])
            return mid;
        else if(item<x[mid])
            return binSearch(x,l,mid-1,item);
        else
            return binSearch(x,mid+1,r,item);
    }
    return -1;
}
void solve()
{
    v32 v;
    int n,tmp,item;
    cin >> n >> item;

    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        v.pb(tmp);
    }
    
    int lb=0,ub=n-1,mid=0,prev=0,nxt=0,pivot=0;
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        prev=(mid-1+n)%n;
        nxt=(mid+1)%n;

        if(v[mid]<v[prev] && v[mid]<v[nxt])
        {
            pivot=mid;
            break;
        }
        else if(v[mid]>v[prev] && v[mid]>v[nxt])
        {
            pivot=nxt;
            break;
        }
        else if(v[mid]>v[prev] && v[mid]<v[nxt])
            ub=prev;
        else
            lb=nxt;
    }


    int a=binSearch(v,0,pivot,item);
    int b=binSearch(v,pivot,n-1,item);

    if(a!= -1)
        cout << a << ln;
    else
        cout << b << ln;
}