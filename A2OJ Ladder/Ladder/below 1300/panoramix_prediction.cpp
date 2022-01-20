/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://codeforces.com/problemset/problem/80/A

*/

#include <bits/stdc++.h>
using namespace std;

void solution();
bool isPrime(long long n);

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

bool isPrime(long long n)
{	
	if(n<2)	return false;

	for(long long i=2;i*i<=n;i++)	if(n%i==0)	return false;

	return true;
}

void solution()
{
	long long n, m;	cin >> n >> m;

	while(!(isPrime(++n)));

	cout << ((m==n)?"YES":"NO");

}
