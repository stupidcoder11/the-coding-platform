/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/144/A

*/

#include <bits/stdc++.h>
using namespace std;

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

void solution()
{
	// first index of max_el + n-1  - last index of min_ele

	int n;	cin >> n;

	int arr[n];	for(int i=0;i<n;i++)	cin >> arr[i];

	int min=INT_MAX, max=INT_MIN, idx_max=0, idx_min=0,ans=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			idx_max=i;
		}
		if(arr[i]<=min)
		{
			min=arr[i];
			idx_min=i;
		}
	}

	// Formula used
	ans=idx_max+n-1-idx_min;
	
	cout << ((idx_max<idx_min)?ans:ans-1) << "\n";

}
