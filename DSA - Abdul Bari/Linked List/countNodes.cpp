#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first = NULL;

void createLL(int A[], int n)
{
	struct Node *t, *last;
	
	first = new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;

	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}

}

int displayCount(struct Node *t)
{
	
	if(!t)
		return 0;
	else
		return (displayCount(t->next)+1);
}

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;	cin >> n;
	int A[n];

	for(int i=0;i<n;i++)	cin >> A[i];

	createLL(A,n);
	cout << "Node count: " << displayCount(first) << endl;

	return 0;
}