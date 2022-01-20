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
	// Just suppose that n is extremely large
	// almost infinite
	int n, target;	cin >> n >> target;
	
	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];

	int lb=0, ub=1;

	while(target>arr[ub])
	{
		lb=ub;
		ub*=2;
	}

	int ans=-1, mid;
	
	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(target==arr[mid])
		{
			ans=mid;
			break;
		}
		else if(target<arr[mid])	ub=mid-1;
		else lb=mid+1;
	}
	
	if(ans>=0)
		cout << "Index : " << ans << endl;
	else
		cout << "Does not exist!" << endl;
}