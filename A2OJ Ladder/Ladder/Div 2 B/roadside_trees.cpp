/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:



*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solution();

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
// OPTIMISED APPROACH
// int a[200005], n;
// int main()
// {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
	
//     while (cin >> n) {
//         ll sum = 0;
//         a[0] = 1;
//         for (int i = 1; i <= n; ++i) {
//             scanf("%d", &a[i]);
//             sum = sum + abs(a[i] - a[i - 1]) + 2;
//         }
//         cout << sum << endl;
//     }
//     	#ifndef ONLINE_JUDGE
//     cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
//     #endif
//     return 0;
// }
void solution()
{
	ll n;	cin >> n;

	ll arr[n];

	for(ll i=0; i<n; i++)	cin >> arr[i];

	ll cnt=-1, cur=0;

	for(ll i=0;i<n;i++)
	{
		// moving to next tree
		cnt++;

		// cost to climb top
		cnt+=arr[i]-cur;

		//	eating

		cnt++;

		// descending if req.

		if(arr[i+1]<arr[i])
		{
			cnt+=arr[i]-arr[i+1];
			cur=arr[i+1];
		}
		else
			cur=arr[i];
	}

	cout << cnt << endl;
}