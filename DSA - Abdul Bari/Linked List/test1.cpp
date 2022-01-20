/*	CODE WRITER		:	Arushi
	COLLEGE			:	ABES Engineering College	*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

// ****************************************************************************
// 								TYPENAMES & MACROS
// ****************************************************************************

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<char> vch;
typedef vector<bool> vbool;
typedef pair<ll, ll> p;
typedef vector<p> vp;


#define deb(x)			cout << #x << " : " << x << "\n";
#define inp(i,a)		for(auto &x: a)	cin >> x;
#define op(i,a)			for(auto x: a)	cout << x << " ";
#define opln(i,a)		for(auto x: a)	cout << x << "\n";
#define newline			cout << "\n";
#define pb(x)			push_back(x);

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

vector<int> graph[1001];
vector<pair<ll,vector<ll>>> pntr;

void dfs(ll st,ll e,ll vx[],vector<ll> rs,ll w)
{
   rs.push_back(st);
   if(st == e){
       pntr.push_back({w*(rs.size()-1),rs});
       return;
   }
   for(auto u : graph[st]){
       if(vx[u] == 0){
          vx[st] = 1;
          dfs(u,e,vx,rs,w);
          vx[st] = 0;
       }
   }
}

void solution()
{
   	ll n,m,t,c,u,v;	cin>>n>>m>>t>>c;

    while(m--)
    {
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    v64 rs;
    ll w = c;

    ll vx[n+1];
    for(auto &x: vx)	x=0;

    dfs(1,n,vx,rs,w);
    sort(pntr.begin(),pntr.end());

    v64 rt[n+1];
    for(int i=0;i<pntr.size();i++)
    {
        ll nes = pntr[i].second.size();

        for(auto u : pntr[i].second)	rt[u].push_back(nes);
    }

    ll trt[n+1];
    for(auto &x: trt)	x = 0;

    trt[1] = 1;
    trt[n] = 1;

    for(int i=2;i<=n-1;i++)
    {
        if(rt[i].size() > 0)
        {
            ll tm = rt[i][0];
            ll up = upper_bound(rt[i].begin(),rt[i].end(),tm) - rt[i].begin();
            trt[i] = up;
        }
    }
    for(int i=1;i<=n;i++)	cout<<trt[i]<<" ";
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	
	
	solution();

	// #ifndef ONLINE_JUDGE
	// cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	// #endif

	return 0;
}
