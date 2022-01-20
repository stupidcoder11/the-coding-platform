/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

NA

*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first, *last;

void insertAtLast(int val)
{
	struct Node *temp;
	temp=new Node;
	temp->data=val;
	temp->next=NULL;

	if(first==NULL)
	{
		first=last=temp;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
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


void solution();

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

void solution()
{
	insertAtLast(8);
	// display_sll(first);
	insertAtLast(10);
	// display_sll(first);
	insertAtLast(14);
	display_sll(first);
}