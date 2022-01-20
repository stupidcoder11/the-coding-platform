/*
Q: Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

Link : https://leetcode.com/problems/k-th-symbol-in-grammar/
*/

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code

int getKthSymbol(int, int);

int getKthSymbol(int N, int K)
{
	if(N == 1 && K == 1)	// given in the question
		return 0;

	// observations to be made here, 
	// 1st - see how K will be modified (would it be K-1 ? think!)
	// 2nd - draw the tree diagrams for N = 1, 2, 3, 4 and see the trend

	// N = 1, len = 1; 
	// N = 2, len = 2;
	// N = 3, len = 4; 
	// N = 4, len = 8;
	// N = 5, len = 16;
	// N = 6, len = 32;

	// Observe the trend of N vs len above

	// If K ≤ len/2, then there is one to one mapping in N-1th row & first half of Nth row
	// If K > len/2, then there is one to one mapping in N-1th row & second half of Nth row + inversion of corresponding bits

	int midIdx = 1 << (N-1) >> 1;	// 1 << N will give 2ˆN and N >> 1 will give N/2		 

	if(K <= midIdx)
		return getKthSymbol(N-1, K);	// one to one mapping for first half of previous row

	return !getKthSymbol(N-1, K-midIdx);	// one to one mapping for second half of previous row + inversion
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

	int N, K;	cin >> N >> K;
	cout << getKthSymbol(N, K);


	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}