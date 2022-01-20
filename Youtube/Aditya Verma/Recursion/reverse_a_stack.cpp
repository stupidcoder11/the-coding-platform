// Q: Given a stack S of size N ( N ≥ 0), reverse the stack using recursion and display the elements

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// ......................................................................................

// My code

void reverse(stack<int> &s);
void insertAtBottom(stack<int> &s, int val);


void reverse(stack<int> &s)	// suppose this would reverse the stack 
{
	if(s.empty())
		return;

	int x = s.top();
	s.pop();
	reverse(s);	// suppose this would reverse the remaining elements in stack
	insertAtBottom(s, x);	// now this function would insert the left element at bottom
}

void insertAtBottom(stack<int> &s, int val)	// suppose this inserts val at bottom of stack
{
    if(s.empty())
    {
    	s.push(val);
    	return;
    }
	int x = s.top();
	s.pop();
	insertAtBottom(s, val);	// suppose this would remove the values & insert the value at last 
	s.push(x);				// adding remaining values
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

	int N;	
	cin >> N;

	stack<int> s;

	for(int i=0; i<N; i++)
	{
		int val;	cin >> val;
		s.push(val);
	}
	
	reverse(s);

	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif


	return 0;
}
