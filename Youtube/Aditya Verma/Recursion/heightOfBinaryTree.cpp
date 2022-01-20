// Given an the root node of a binary tree, find it's height using recursion (IBH method)

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

struct TreeNode
{
	int data;
	struct TreeNode *left, *right;

	TreeNode(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

// ............................................................................................................

// My code

int getHeight(TreeNode *root)		// suppose this function would give me height of the binary tree
{
	if(root == NULL) return 0;

	int x = getHeight(root->left);	// assume this would give me height of left subtree
	int y = getHeight(root->right);	// assume this would give me height of right subtree
	return 1+max(x,y);				// now actual height would be the max height of subtree + 1(including root)
	

	// Also for getting "level" we use "height-1" or in the above return statement "do not add 1" just
	// return the maximum height of the subtrees
}

// ............................................................................................................

// Driver function

int32_t main()
{
	ios_base::sync_with_stdio(false);	cin.tie(0);

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	// 	   1
	//    / \
	//   2   3
	//  /   / \
	// 5   7   4
	//  \       \
	//   8      12
	//         /  \
	//		  21   60

	TreeNode *root 						= new TreeNode(1);
	root->left 							= new TreeNode(2);
	root->right 						= new TreeNode(3);
	root->left->left					= new TreeNode(5);
	root->right->left					= new TreeNode(7);
	root->right->right					= new TreeNode(4);
	root->left->left->right				= new TreeNode(8);
	root->right->right->right			= new TreeNode(12);
	root->right->right->right->left		= new TreeNode(21);
	root->right->right->right->right	= new TreeNode(60);	

	int ans = getHeight(root);
	cout << ans << "\n";



	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}
