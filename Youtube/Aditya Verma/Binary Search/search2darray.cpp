/*	CODE WRITER	:	lucifer_007

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

// Search in row wise and column wise sorted array


/*

INPUT

4 4
10 20 30 40
15 25 35 45
27 29 37 45
32 33 39 50

23

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

/*

Faster Approach (0ms)-

*****ONLY IF THE LAST ELEMENT OF THE PREVIOUS ROW IS LESS THAN THE 
FIRST ELEMENT OF THE CURRENT ROW i.e. the 2d array is simple a 1d sorted 
array written filled in a 2d array structure*******

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size(),n=matrix[0].size();
        int low=0,high=m*n -1;
        int mid;
        while(low<=high){
            mid=low+ (high-low)/2;
            if(matrix[mid/n][mid%n]==target){
                return true;
            }
            if(matrix[mid/n][mid%n]<target){
                low=mid+1;
            }else high=mid-1;
        }
        return false;
    }
};

*/


// My approach (12 ms, 9.5MB @ leetcode)
void solution()
{
	int m, n;	cin >> m >> n;

	int mat[m][n];
	
	for(int i=0;i<m;i++)	for(int j=0;j<n;j++)	cin >> mat[i][j];

	int target;	cin >> target;

	int lb=0;
	int ub=n-1;
	int mid;
	
	while(lb<=m-1 && ub>=0)
	{
		mid=mat[lb][ub];
		if(target==mid)
		{
			cout << "(" << lb << ", " << ub << ")\n";
			break;
		}
		else if(target<mid)	ub--;
		else lb++;
	}
	
	if(lb==m || ub==-1)
		cout << "Not found" << endl;

}