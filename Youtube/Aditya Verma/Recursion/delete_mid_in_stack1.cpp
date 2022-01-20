/*
Q: Given a stack S of size N ( N ≥ 3), delete the middle element(s) and display the final stack.
*/

#pragma GCC optimise("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x)	cout << #x << ": " << x << "\n";

// ..................................................................................................................

// My code

void delete_mid(stack<int> &s, int mid)
{
	if(s.empty())			// if stack is empty print likewise
	{
		cout << "Empty stack";
		return;
	}

	if(mid == 1)		
	{
		s.pop();
		return;
	}


	int x = s.top();		// preserve the top-most element
	s.pop();				// prepare the smaller stack
	delete_mid(s,mid-1);	// assume this would delete mid(s) in the remaining stack
	s.push(x);				// finally add the preserved element in the stack
}

void compute(stack<int> &s, int n)
{
	if((n&1) == 0)				// if even-sized stack then remove two middle elements
	{
		delete_mid(s,n/2+1);	// remove (n/2)+1 th element 
		delete_mid(s,n/2);		// remove n/2 th element
	}
	else
	delete_mid(s,n/2+1);		// remove (n/2)+1 th element
}

// ..................................................................................................................


// Driver function

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// Input
	int N;	cin >> N;

	stack<int> s;

	for(int i=0; i<N; i++)
	{
		int x;	cin >> x;
		s.push(x);
	}

	compute(s,N);

	while(s.empty() == 0)
	{
		int val = s.top();
		cout << val << "\n";
		s.pop();
	}

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif
}