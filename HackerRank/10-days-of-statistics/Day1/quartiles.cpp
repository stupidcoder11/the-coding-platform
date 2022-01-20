#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int getMedian(int arr[], int l, int r)
{
	int n = r-l+1;
	int mid = l+(r-l)/2;
	return (n&1)?arr[mid]:(arr[mid]+arr[mid+1])/2;
}

int main()
{
	// File I/O
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	// Fast I/O
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	// My Code
	int n;	cin >> n;
	int arr[n];
	for(auto &itr: arr)	cin >> itr;

	sort(arr,arr+n);
	int ans[3];
	int pivot = n/2;
	ans[0] = getMedian(arr,0,pivot-1); 
	ans[1] = getMedian(arr,0,n-1);
	ans[2] = (n&1)?getMedian(arr,pivot+1,n-1):getMedian(arr,pivot,n-1);

	for(int itr: ans)	cout << itr << "\n";


	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}