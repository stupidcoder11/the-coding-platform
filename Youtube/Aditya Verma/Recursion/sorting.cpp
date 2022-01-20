// Q: Given a vector V of size N, sort the vector in ascending order using recursion.

#pragma GCC optimise("Ofast")
#include <bits/stdc++.h>
#define int long long int

using namespace std;

// .......................................................................................................

// My code

void insert(vector<int> &v, int val)
{	
	// if the last element of V ≤ val then simply insert val at last of V or if V is empty then too
	// simply do the same because we don't have to check for smaller parts now
	if(v.size() == 0 || v[v.size()-1] <= val)
	{
		v.push_back(val);
		return;
	}

	int x = v[v.size()-1];	// preserve the (size-1)th element
	v.pop_back();			// modify(or reduce the size) the array by removing the (size-1)th element
	insert(v,val);			// recursively call insert() on smaller V would do the insertion for smaller V
	v.push_back(x);			// finally insert the left value(size-1 th element) at last of vector V
}

void sort(vector<int> &v)
{
	if(v.size() == 1)		// when there is only one element present then it is already sorted
		return;

	int x = v[v.size()-1];	// take out the (size-1)th element and recursively call sort() for remaining n-1 elements
	v.pop_back();			// reduce vector size (or make vector ready for smaller input)
	sort(v);				// call sort() for smaller V
	insert(v,x);			// call insert() which would insert the value x at the right position in sorted V
}

// .......................................................................................................

// Driver function
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N;	cin >> N;
	vector<int> V(N,0);

	for(auto &itr: V)	cin >> itr;

	sort(V);
	
	for(auto itr: V)	cout << itr << " ";
	
	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif
}