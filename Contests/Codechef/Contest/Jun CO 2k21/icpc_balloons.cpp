/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link: 

https://www.codechef.com/COOK130C/problems/BALLOON

Sample Input:

3
7
1 2 3 4 5 7 6
8
8 7 6 5 4 3 2 1
9
7 4 3 5 6 1 8 2 9

Sample Output:

7
8
8

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
	int t, n;	cin >> t;

	while(t--)
	{
		cin >> n;

		int arr[n];

		for(int i=0;i<n;i++)	cin >> arr[i];

		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]>0 && arr[i]<8)	
			{
				cout << i+1 << "\n";
				break;
			}
		}
	}
}