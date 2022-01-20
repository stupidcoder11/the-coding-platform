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

#define dbg(x)	cout << #x << " : " << x << endl;

typedef long long ll;

// ****************************************************************************
// 									MY CODE
// ****************************************************************************
int myAtoi(string s) 
{
	int i=0, n = s.size();
	long long int sign = 1, ans = 0;
	while(i<n && s[i] == ' ')	i++;

	if(s[i] == '+' || s[i] == '-')	sign = (s[i++] == '-')?-1:1;

	// while(i<n && isdigit(s[i]))
	// {
	// 	ans = ans*10 + s[i]-'0';
	// 	i++;
	// }
	while(i<s.size())
        {
            if(isdigit(s[i]))	{ ans = ans*10 + (s[i]-'0'); i++; }
            else				{ break; }
        }
 	
 	ans *= sign;

 	return (ans < INT_MIN)? INT_MIN:(ans > INT_MAX)? INT_MAX: ans; 
}
void solution()
{
	string s;	cin >> s;
	cout << myAtoi(s) << endl;
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
	
	
	solution();

	#ifndef ONLINE_JUDGE
	cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
	#endif

	return 0;
}
