#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define dbg(x) cout << #x << ": " << x << "\n";
#define limit 100

// .......................................................................................................

// My code
class implementation_stack
{
	int top;
	public:
		int stack[limit];

	implementation_stack()
	{
		top = -1;
		memset(stack, 0, sizeof(stack));
	}

	void push(int x)
	{
		if(top == limit-1)
		{
			cout << "Overflow\n";
		}
		else
		{
			stack[++top] = x;
			cout << "Push successful\n";
		}
	}

	int pop()
	{
		if(top == -1)
		{
			cout << "Underflow\n";
			return -1;
		}
		else
		{
			int x = stack[top--];
			cout << "Pop successful\n";
			return x;
		}
	}

	int peek()
	{
		if(top == -1)
		{
			cout << "No peek element\n";
			return -1;
		}
		else
		{
			cout << "Peek element: " << stack[top] << "\n";
			return stack[top];
		}
	}

	bool isEmpty()
	{
		if(top == -1)
		{
			cout << "Empty\n";
			return true;
		}
		else
		{
			cout << "Non-empty\n";
			return false;
		}
	}

	bool isFull()
	{
		if(top == limit-1)
		{
			cout << "Full\n";
			return true;
		}
		else
		{
			cout << "Not full\n";
			return false;
		}
	}

	int capacity()
	{
		if(top == -1)
		{
			cout << "Capacity: " << limit << "\n";
			return limit;
		}
		else
		{
			cout << "Capacity: " << limit-1-top << "\n";
			return limit-top;
		}
	}
};

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// Input
	implementation_stack obj;
	obj.push(10);
	obj.pop();
	obj.pop();
	obj.push(20);
	obj.push(13);
	obj.peek();
	obj.capacity();
	// cout << obj.peek() << endl;
	// cout << obj.isEmpty() << endl;
	// cout << obj.isFull() << endl;
	

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}