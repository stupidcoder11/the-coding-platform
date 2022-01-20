#include <iostream>
using namespace std;

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;

#define deb(x)			cout << #x << " : " << x << "\n";
#define for32(i,n)		for(int i=0;i<(ll)n;i++);
#define for32(i,s,n)	for(int i=s;i<=n;i++); 
#define for64(i,n)		for(ll i=0;i<(ll)n;i++)





struct Node
{
	int data;
	struct Node *next;
}*first;

void insert_at_first(int val)
{
	struct Node *dummy = new Node;

	deb

	dummy->data=val;

	if(first)
	{
		dummy->next=first;
		first=dummy;
	}
	else
	{
		dummy->next=NULL;
		first=dummy;
	}
}

void displaySLL(struct Node *start)
{
	while(start)
	{
		cout << start->data;
		start=start->next;
		if(start)
			cout << " -> ";
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n,x;	

	insert_at_first(8);
	insert_at_first(10);
	insert_at_first(14);

	displaySLL(first);

	return 0;
}