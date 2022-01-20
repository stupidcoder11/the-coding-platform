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
	while(t!=NULL)
	{
		cout << t->data << " ";
		t=t->next;
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int A[]={1,4,2,3,1,-8};
	int n=sizeof(A)/sizeof(A[0]);

	createLL(A,n);
	displayLL(first);

	return 0;
}