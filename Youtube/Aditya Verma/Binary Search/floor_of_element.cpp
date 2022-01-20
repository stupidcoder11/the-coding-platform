/*	CODE WRITER	:	lucifer_007

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

	return 0;
}

void solution()
{
	int n, target;	cin >> n >> target;

	int arr[n], lb=0, ub=n-1, mid, ans;

	for(int i=0;i<n;i++)	cin >> arr[i];

	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(target>=arr[mid])
		{
			lb=mid+1;
			ans=arr[mid];
		}
		else
			ub=mid-1;
	}

	cout << ans << endl;
}