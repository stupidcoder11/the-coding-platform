#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

struct Node
{
	int data;
	struct Node *next;

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct Node* createSLL(int arr[], int n)
{
	struct Node *first, *last;

	first=new Node(arr[0]);

	last=first;

	for(int i=1;i<n;i++)
	{
		Node *temp = new Node(arr[i]);
		last->next = temp;
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




// ===================== MY CODE ======================


int count_nodes(struct Node *head)
{
	if(head == NULL)	return 0;
	return 1+count_nodes(head->next);
}


void solve(struct Node *head, int n)
{
	int total = count_nodes(head);

	// ith node from end = (n-i+1)th node from beginning
	int pos = total-n+1;

	cout << "Original list : \n";
	display_sll(head);

	struct Node *start = head, *itr = head, *post, *pre;

	if(pos == 1)
		start = head->next;
	else
	{
		int i=1;
		while(itr != NULL && i<pos)
		{
			i++;
			post = itr->next;
			pre = itr;
			itr = itr->next;
		}
		pre->next = post->next;
	}
	
	cout << "Modified List (after deleting " << n << "th node from end) \n";
	display_sll(start);
}


// ======================================================




int main()
{
	// File I/O
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	// Fast I/O
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	// My Code
	int n;	cin >> n;
	int arr[n];	for(auto& itr: arr)	cin >> itr;

	struct Node *head = createSLL(arr,n);

	int x;	cin >> x;

	solve(head,x);

	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}