
// Q: Given an integer N (1 ≤ N ≤ ∞), print the natural numbers from 1 to N using recursion (IBH method)

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code

void print1ToN(int n);

void print1ToN(int n)
{
	if(n == 1)				// base case
	{
		cout << n << "\n";
		return;
	}
	print1ToN(n-1);			// induction (suppose this would print 1 to N)
	cout << n << "\n";		// printing the remaining n after induction step
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// My code
	int N;	
	cin >> N;	// enter the value of N
	print1ToN(N);


	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}
