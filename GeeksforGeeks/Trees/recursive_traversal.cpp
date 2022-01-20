#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

struct Tree
{
	int data;
	struct Tree *left, *right;

	Tree(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

void preorder(struct Tree *root)
{
	if(!root)	return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(struct Tree *root)
{
	if(!root)	return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(struct Tree *root)
{
	if(!root)	return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

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
	struct Tree *root = new Tree(10);
	root->left = new Tree(20);
	root->right = new Tree(30);
	root->left->left = new Tree(50);
	root->left->right = new Tree(100);
	root->right->left = new Tree(400);
	root->right->right = new Tree(800);

	cout << "Preorder	: ";	
	preorder(root);
	cout << endl;
	cout << "Inorder	: ";	
	inorder(root);
	cout << endl;
	                  cout << "Postorder	: " ;	
	postorder(root);

	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}