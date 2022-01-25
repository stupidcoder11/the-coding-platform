#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";
#define limit 100

// .......................................................................................................

// My code
class implement_queue
{
	int front, rear, capacity;
	int queue[limit];
	implement_queue()
	{
		front = rear = -1;
		memset(queue, 0, sizeof(queue));
	}

	bool isEmpty()
	{
		return (front > rear || front == limit-1);
	}

	bool isFull()
	{
		return (rear == limit-1);
	}

	void push(int val)
	{
		if(isFull())		
			cout << "Overflow\n";
		else
		{
			if(rear == -1)
			{
				queue[++rear] = val;
				++front;
			}
			else
			{
				queue[++rear] = val;
			}
			cout << "Push successful\n";
		}
	}

	int pop()
	{
		if(isEmpty())
			cout << "Underflow\n";
		else
		{
			if(front == rear)
			{
				cout << front
			}
		}
	}
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	
	

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}