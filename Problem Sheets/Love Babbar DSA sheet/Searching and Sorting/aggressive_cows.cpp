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

void solve()
{
    int t, n, c;
    
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        
        int stalls[n];
        
        for(int i=0;i<n;i++)
        cin >> stalls[i];
        
        sort(stalls, stalls+n);
        
        int lb=0, ub=1e9, mid, ans=0;
        
        while(lb<=ub)
        {
            mid=lb+(ub-lb)/2;
            
            int prev=stalls[0], count=1;
            for(int i=1;i<n;i++)
            {
                if(stalls[i]-prev>=mid)
                {
                    count++;
                    prev=stalls[i];
                    if(count==c)
                    break;
                }
            }
            if(count>=c)
            {
                ans=mid;
                lb=mid+1;
            }
            else
                ub=mid-1;
            
        }
        cout << ans<< "\n";
    }
}