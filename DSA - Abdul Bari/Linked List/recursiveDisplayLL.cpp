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

void displayLL(struct Node *t)
{
	if(t!=NULL)
	{
		cout << t->data << " ";
		displayLL(t->next);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;	cin >> n;
	
	int a[n];
	
	for(int i=0;i<n;i++)	cin >> a[i];

	createLL(a,n);
	displayLL(first);

	return 0;
}