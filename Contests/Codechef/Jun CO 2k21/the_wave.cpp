/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*
Problem link:
https://www.codechef.com/COOK130C/problems/WAV2

Sample Input:

4 6
1 3 5 100
-2
2
4
80
107
5

Sample Output:

POSITIVE
NEGATIVE
POSITIVE
NEGATIVE
POSITIVE
0

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
	int n, q;	cin >> n >> q;

	vector<int> arr(n);	
	for(int i=0;i<n;i++)	cin >> arr[i];

	sort(arr.begin(), arr.end());

	while(q--)
	{
		int x;	cin >> x;
		
		if(binary_search(arr.begin(), arr.end(), x))
			cout << "0\n";
		else
		{
			// 	upper bound() return first element which is >value. If not, return end().
			// 	lower bound() return first element which is ≥value. If not, return end().
			int idx=upper_bound(arr.begin(), arr.end(), x)-arr.begin();
			if((n-idx)&1)
				cout << "NEGATIVE\n";
			else
				cout << "POSITIVE\n";
		}		
	}
}