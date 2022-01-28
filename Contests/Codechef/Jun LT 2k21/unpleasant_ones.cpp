/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/LTIME97C/problems/UNONE

*/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;

		int arr[n];	
		vector<int> odd_list;

		// one of the orderings to minimise ugliness
		// is to print all the even a[i]s first and
		// then all the odd a[i]s as  
		// because an even no. always has it's first
		// bit as '0' while an odd no. always has it's 
		// first bit as '1'

		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i]&1)
				odd_list.push_back(arr[i]);
			else
				cout << arr[i] << " ";

		}

		for(auto num : odd_list)	cout << num << " ";

		cout << endl;
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