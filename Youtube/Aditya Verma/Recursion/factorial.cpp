// Q: Given an integer N (0 ≤ N ≤ 15), print the factorial using recursion (IBH method)

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// ......................................................................................

// My code

int getFactorial(int n)			// suppose this function would give me n!
{
	if(n == 0)	return 1;		// by mathematical definition 0! = 1

	int k = getFactorial(n-1);	// assume this would give me the factorial of (n-1)

	return n*k;					// form the factorial of n by using (n-1)! i.e. n! = n*(n-1)!
}

// ......................................................................................

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
	cout << getFactorial(N);


	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}
