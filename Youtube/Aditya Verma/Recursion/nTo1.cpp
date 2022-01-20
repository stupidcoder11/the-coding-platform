// Q: Given an integer N (1 ≤ N ≤ ∞), print the natural numbers from N to 1 using recursion (IBH method)

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code

void printNto1(int n);

void printNto1(int n)	//  suppose this function prints N to 1
{
	if(n == 1)	// base case
	{
		cout << n << "\n";
		return;
	}
	cout << n << "\n";	// this would print the remaining number i.e. N
	printNto1(n-1);	// induction (suppose this would print N-1 to 1)
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
	printNto1(N);


	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}
