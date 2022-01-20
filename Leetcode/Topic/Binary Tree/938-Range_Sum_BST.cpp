#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("Ofast")

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

struct TreeNode
{
	int data;
	struct TreeNode *left, *right;

	TreeNode()
	{
		data = 0;
		left = right = NULL;
	}

	TreeNode(int data)
	{
		this->data = data;
		left = right = NULL;
	}

	TreeNode(int data, struct TreeNode *left, struct TreeNode *right)
	{
		this->data = data;
		this->left = left;
		this->right = right;
	}
};

// ------------------------------------------------------------------

int rangeSumBST(TreeNode *root, int low, int high)
{
	if(root == NULL)	return 0;

	int res = 0;
	if(root->data >= low && root->data <= high)	res += root->data;

	res += rangeSumBST(root->left, low, high);
	res += rangeSumBST(root->right, low, high);

	return res;
}

// ------------------------------------------------------------------


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
	struct TreeNode *root;

	root					= new TreeNode(10);
	root->left 				= new TreeNode(5);
	root->right 			= new TreeNode(15);
	root->left->left		= new TreeNode(3);
	root->left->right		= new TreeNode(7);
	root->right->right		= new TreeNode(18);


	int low = 7, high = 15;

	cout << rangeSumBST(root, low, high) << endl;

	// Time cost
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}