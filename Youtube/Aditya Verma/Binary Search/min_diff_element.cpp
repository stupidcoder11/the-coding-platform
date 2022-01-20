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

	int arr[n];

	for(int i=0;i<n;i++)	cin >> arr[i];

	int lb=0;
	int ub=n-1;
	int ans, mid, floor, ceil;
	
	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(target==arr[mid])
		{
			ceil=floor=arr[mid];
			break;
		}
		else if(target<arr[mid])
		{
			ceil=arr[mid];
			ub=mid-1;
		}
		else
		{
			floor=arr[mid];
			lb=mid+1;
		}
	}

	ans=(abs(target-floor)<=abs(target-ceil))?floor:ceil;

	cout << ans << endl;

}