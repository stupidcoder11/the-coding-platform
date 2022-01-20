/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:



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

	#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif

	return 0;
}

void solution()
{
	int Tsum=0;

	int arr[3][3];
	vector<int> sum(3);

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> arr[i][j];
			Tsum+=arr[i][j];
			sum[i]+=arr[i][j];
		} 
	}

	Tsum=Tsum/2;

	for(int i=0;i<3;i++)	
		arr[i][i]=Tsum-sum[i];

	for(int i=0;i<3;i++)
	{
		for(auto j: arr[i])
		cout << j << " ";
		cout << "\n";
	}
}
