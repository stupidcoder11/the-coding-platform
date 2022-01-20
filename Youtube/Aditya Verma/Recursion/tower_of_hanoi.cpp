// Q: Given the number of disks 'N' ( 1 ≤ N ≤ 20), show the steps to solve N-Disk Tower of Hanoi where towers are
// A(source), B(Destination), C(Helper)

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// ...................................................................................................................

// My code
void toh(int n, char S, char D, char H)
{
	if(n == 1)	// when we have only one disk
	{
		cout << "Disk " << n << " from " << S << " -> " << D << "\n";
		return;
	}
	toh(n-1, S,H, D);	// suppose this would place n-1 disks from Source to Helper

	cout << "Disk " << n << " from " << S << " -> " << D << "\n";	// this shows the movement of nth disk from S to D

	toh(n-1, H, D, S);	// this would finally place the n-1 disks from Helper to Destination

}

// ...................................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// Input
	int N;	cin >> N;

	toh(N, 'A', 'C', 'B');
	
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}