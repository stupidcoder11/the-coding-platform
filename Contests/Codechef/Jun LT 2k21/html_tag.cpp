/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/LTIME97C/problems/HTMLTAGS

*/

#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
	int n=s.length();

	if(n<4)
		return false;

	if(s[0]!='<' || s[1]!='/' || s[n-1]!='>')
		return false;

	for(int i=2;i<n-1;i++)
		if(isupper(s[i]) || !(isalnum(s[i])))
			return false;
	
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;

		cout << (solution(s)?"Success":"Error") << "\n";
	}


	#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif

	return 0;
}
