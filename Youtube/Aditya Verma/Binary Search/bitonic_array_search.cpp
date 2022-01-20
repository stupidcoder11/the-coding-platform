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
	int n, target;
	cin >> n >> target;

	int arr[n];
	for(int i=0;i<n;i++)	cin >> arr[i];

	int lb=0;
	int ub=n-1;
	int bitonic_point=-1, mid;
	
	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(mid>0 && mid<n-1)
		{
		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
		{
			bitonic_point=mid;
			break;
		}
		else if(arr[mid]>arr[mid-1])
			lb=mid+1;
		else
			ub=mid-1;
		}
		else if(mid>0)
		{
			bitonic_point=(arr[mid]>arr[mid-1])?mid:mid-1;
		}
		else
		{
			bitonic_point=(arr[mid]>arr[mid+1])?mid:mid+1;
		}
	}
	cout << "#bitonic_point: " << bitonic_point << endl;

	
	
}