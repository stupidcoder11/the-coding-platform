/*	CODE WRITER	:	lucifer_007

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Input:
7
10 20 15 2 23 90 67

OUTPUT:
1 or 5

Input: 

4
5 10 20 15

Output: 
2

*/

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
	int n;
	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++)	cin >> arr[i];

	int lb=0;
	int ub=n-1;
	int ans=-1, mid;
	
	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(mid>0 && mid<n-1)
		{
			if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
			{
				ans=mid;
				break;
			}
			if(arr[mid]>=arr[mid-1])
			{
				lb=mid+1;
			}
			else
				ub=mid-1;
		}
		else if(mid>0)
		{
			ans=(arr[mid]>arr[mid-1])?mid:(mid-1);
			break;
		}
		else
		{
			ans=(arr[mid]>arr[mid+1])?mid:(mid+1);
			break;
		}
	}
	
	cout << "Peak element: " << ans << endl;

}