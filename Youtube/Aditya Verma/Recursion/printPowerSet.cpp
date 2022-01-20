/*
Given a string S, print all the subsets of the string in any order
*/

#include <bits/stdc++.h>
using namespace std;

// Code
void printPowerSet(string ip, string op)
{
	// Think of this problem via recusrion tree method (a.k.a try to draw recursion tree)
	// first and then write the recursive code. It would make more sense this way.

	if(ip == "")				// when there are no characters left in input string
	{
		cout << op << " ";		// my final output is generated
		return;
	}
	string op1 = op;			// either we exclude the character
	string op2 = op+ip[0];		// or we include the character

	ip.erase(ip.begin() + 0);	// now reducing the input size

	printPowerSet(ip, op1);		// suppose this would give me the output excludling the character
	printPowerSet(ip, op2);		// suppose this would give me the output including the character
	return;
}

// Driver function
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string s;	cin >> s;

	printPowerSet(s, "");

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif
}