/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

#include <bits/stdc++.h>
using namespace std;

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
	string str;	cin >> str;

	string ans="";
	int i;
	for(i=0;i<str.length()-1;i++)
	{
		if(str[i]=='-' && str[i+1]=='.')
		{
			ans+="1";
			++i;
		}
		else if(str[i]=='-' && str[i+1]=='-')
		{
			ans+="2";
			++i;
		}
		else
			ans+="0";
	}

	if(str[i]=='.')	ans+="0";
	
	cout << ans << endl;
}