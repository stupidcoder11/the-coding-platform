// ****************************************************************************
// 	INTRODUCTION
// ****************************************************************************

/*	CODE WRITER		:	jinx_11

	MOTO			:	REGULAR CODE MAKES THE ROAD
	
	Problem link	:	
*/

// ****************************************************************************
// 	HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

// ****************************************************************************
// 	MY CODE
// ****************************************************************************

class Tree
{
private:
	int data;
	Tree *left, *right;
public:
	Tree(int val)
	{
		data = val;
		left = right = NULL;
	}
public:
	void creatTree(Tree root)
	{
		root = new Tree(10);
		root.left = 5;
		root.right = 15;
	}
public:
	void inorder(Tree root)
	{
		if(root == NULL)	return;
		inorder(root.left);
		cout << root.data << " ";
		inorder(root.right);
	}
};

void solution()
{
	Tree root;
	creatTree(root);
	inorder(root);
}

// ****************************************************************************
// 	MAIN()
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
