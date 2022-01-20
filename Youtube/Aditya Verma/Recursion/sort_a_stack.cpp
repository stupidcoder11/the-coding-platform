/*
Q: Given a stack S of size N, sort it in ascending order and display the elements(in descending order).
*/

#pragma GCC optimise("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x)	cout << #x << ": " << x << "\n";

// ..................................................................................................................

// My code

void insert(stack<int> &s, int val)			// suppose this function places val at it's correct position in stack s
{
	if(s.empty() == 1 || s.top() <= val)	// if the stack's top value ≤ val then just place val at end of stack
	{
		s.push(val);
		return;
	}

	int x = s.top();		// preserve the top value of stack
	s.pop();				// reduce the size of stack 
	insert(s,val);			// assume that this would insert 'val' at it's correct position
	s.push(x);				// finally place x at the end of the arranged stack so formed
}

void sort(stack<int> &s)	// suppose this function sorts the value in stack
{
	if(s.size() == 1)
		return;

	int x = s.top();		// preserve the top-most value of stack
	s.pop();				// reduce the size of stack
	sort(s);				// believe that sort(s) would sort the n-1 sized stack
	insert(s,x);			// insert the preserved element at it's correct position in stack
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

	while(N-- > 0)
	{
		int x;	cin >> x;
		s.push(x);
	}

	sort(s);

	while(s.empty() == 0)
	{
		int val = s.top();
		cout << val << " ";
		s.pop();
	}

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif
}