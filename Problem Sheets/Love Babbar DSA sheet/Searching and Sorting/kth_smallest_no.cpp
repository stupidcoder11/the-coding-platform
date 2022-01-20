#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    

	int t, n, q;
	long long a, b, k;
	
	cin >> t;

	while(t--)
	{
		cin >> n >> q;
		while(n--)
		{
			cin >> a >> b;

			while(q--)
			{
				cin >> k;
				
				if(k<=b-a+1)
				cout << a+k-1 << "\n";
				else
				cout << -1 < "\n";

			}
		}
	}

	return 0;
}