/*	CODE WRITER	:	lucifer_007

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

#include <bits/stdc++.h>
using namespace std;

void solution();
bool isValid(int arr[], int n, int limit, int groupCount);
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

bool isValid(int arr[], int n, int limit, int groupCount)
{
	int cnt=1;
	int sum=0;
	if(n<groupCount)
		return false;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>limit)
		{
			cnt++;
			sum=arr[i];
		}
	}
	return (cnt>groupCount)?false:true;
}

void solution()
{
	int n;
	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++)	cin >> arr[i];

	int stu;	cin >> stu;

	//My code

	int lb=INT_MIN, ub=0, mid, ans=-1;

	for(auto ele: arr)
	{
		lb=max(lb,ele);
		ub+=ele;
	}

	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;

		if(isValid(arr, n, mid, stu))
		{
			ans=mid;
			ub=mid-1;
		}
		else
		{
			lb=mid+1;
		}
	}

	cout << ans << endl;
}