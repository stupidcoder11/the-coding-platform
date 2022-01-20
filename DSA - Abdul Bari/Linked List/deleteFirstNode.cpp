// ****************************************************************************
// 									INTRODUCTION
// ****************************************************************************

/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	
*/

// ****************************************************************************
// 									HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

// ****************************************************************************
// 									MY CODE
// ****************************************************************************

struct Node
{
	int data;
	struct Node *next;

};

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

struct Node* solution(struct Node *head)
{
	struct Node *dummy = head;

	head = head->next;

	int x = dummy->data;


	delete dummy;

	return head;

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
	
	int arr[] = {1,4,2,5,6,8,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	struct Node* head = createSLL(arr,n);
	
	display_sll(head);

	head = solution(head);

	display_sll(head);

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}
