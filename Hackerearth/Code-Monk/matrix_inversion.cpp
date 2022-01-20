#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {

	int n, m;	cin >> n >> m;
	int arr[n][m];	memset(arr, 0, sizeof(arr));
	int res = 0;
	
	for(int i=0; i<n; i++)	for(int j=0; j<n; j++)	cin >> arr[i][j];


	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m-1; j++)
		{
			if(arr[i][j]>arr[i][j+1])	res++;
		}
	}
	cout << "res : " << res << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	int t;	cin >> t;
	
	while(t--)	solve();

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif
}