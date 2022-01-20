/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.spoj.com/problems/CRAN02/

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
// BRUTE FORCE: GIVING TLE
// void solution()
// {
// 	int t, n, i, j, cnt, sum=0;	cin >> t;

// 	while(t--)
// 	{
// 		cin >> n;

// 		vector<int> arr(n);
// 		for(i=0;i<n;i++)	cin >> arr[i];

// 		cnt=0;
// 		for(i=0;i<n;i++)
// 		{	
// 			sum=0;
// 			for(j=i;j<n;j++)
// 			{
// 				sum+=arr[j];
// 				if(sum==0)	++cnt;
// 			}
// 		}
// 		cout << cnt << "\n";
// 	}
// }

void solution()
{
	long long t, n, i, zero_cnt, cnt, sum;	cin >> t;

	while(t--)
	{
		cin >> n;

		vector<int> arr(n);
		for(i=0;i<n;i++)	cin >> arr[i];

		unordered_map<long,long> mp;

		zero_cnt=cnt=sum=0;

		for(i=0;i<n;i++)
		{	
			sum+=arr[i];
			if(sum==0)	zero_cnt++;
			mp[sum]++;
		}

		for(auto itr=mp.begin();itr!=mp.end();itr++)
		{
			long long x=itr->second;
			cnt+=x*(x-1)/2;
		}
		cout << cnt+zero_cnt << "\n";
	}
}
