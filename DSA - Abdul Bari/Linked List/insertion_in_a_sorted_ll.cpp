/*	
	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	
*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

// ****************************************************************************
// 								TYPENAMES & MACROS
// ****************************************************************************

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<char> vch;
typedef vector<bool> vbool;
typedef pair<ll, ll> p;
typedef vector<p> vp;


#define deb(x)			cout << #x << " : " << x << "\n";
#define for32(i,s,n)	for(int i=s;i<=(int)n;i++);
#define for64(i,s,n)	for(long long i=s;i<=(long long)n;i++)
#define inp(i,a)		for(auto &x: a)	cin >> x;
#define op(i,a)			for(auto x: a)	cout << x << " ";
#define opln(i,a)		for(auto x: a)	cout << x << "\n";
#define newline			cout << "\n";
#define pb(x)			push_back(x);

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

struct Node
{
	int data;
	struct Node *next;
}*start=NULL;

struct Node* createSLL(int arr[], int n)
{
	struct Node *first, *last, *temp;

	first=new Node;
	first->data=arr[0];
	first->next=NULL;
	last=first;

	for(int i=1;i<n;i++)
	{
		temp=new Node;
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}

	return first;
}

void display_sll(struct Node* t)
{
	while(t)
	{
		cout << t->data;
		t=t->next;
		if(t)	cout << " -> ";
	}
	cout << "\n";
}


void solution()
{
	int n;	cin >> n;

	int arr[n];

	inp(i,arr);

	struct Node *start = createSLL(arr, n);

	struct Node *head, *tail, *dummy;

	head = start;
	tail = NULL;

	display_sll(start);

	// Code starts

	int val;	cin >> val;

	dummy = new Node;

	dummy->data = val;

	if(start->data >= val)
	{
		dummy->next = start;
		start = dummy;
	}
	else
	{
		while(head && head->data < val)
		{
			tail=head;

			head=head->next;
		}

		tail->next = dummy;
		dummy->next = head;
	}

	display_sll(start);
}

// ****************************************************************************
// 									MAIN()
// ****************************************************************************

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	
	solution();

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}
