/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/START5C/problems/SLPCYCLE

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define deb(x)	cout << #x << " : " << x << endl;


// Wrong answer on my approach

// void solution()
// {
// 	ll t;	cin >> t;
// 	while(t--)
// 	{
// 		$
// 		$
// 		$
// 		$
// 		$
// 		$
//		
//		Earlier Approach:

// 		for(i=0;i<v.size() && h>0; i++)
// 		{
// 			if(v[i]==0)	continue;

// 			h=2*(h-v[i]);
// 		}

// 		cout << ((h>0)?"No\n":"Yes\n");
// 	}
// }

// after viewing the editorial

void solution()
{
	ll t;	cin >> t;
	while(t--)
	{
		ll l, h, i;	cin >> l >> h;

		string s;	cin >> s;

		// adding '1' in the last to fetch all the continuous 0's aka sleep-chunks
		s+="1";

		ll curr=0;		// to hold the starting index of every chunk

		vector<ll> v;	// to hold all the sleep chunks at one place

		for(ll i=0;i<s.length();i++)
		{
			if(s[i] == '1')
			{
				v.push_back(i-curr);
				curr = i+1;		// updating curr to point to the new starting index
			}
		}

		// New approach

		bool flag = false;	// holds true if solution is found
		for(ll i=0;i<v.size();i++)
		{
			// a cunk is selected if after sleeping in it the new sleep requirement
			// is less than the original one or we can say that the chunk
			// must be "at least half" of the sleep demand

			if(2*v[i]>=h)
			{
				h=2*(h-v[i]);
				if(h<=0)
				{
					flag=true;
					break;
				}
			}

		}

		cout << ((flag)?"Yes\n":"No\n");
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	solution();

	#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif

	return 0;
}
