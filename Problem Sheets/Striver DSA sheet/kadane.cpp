/*	Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: https://leetcode.com/problems/maximum-subarray/	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

/* 
Kadane's algorithm is used to find the maximum sum subarray in O(n). 
This algorithm is an example of trivial dynamic programming.

Algorithm :
1) Define two-variable currSum which stores maximum sum ending here and 
maxSum which stores maximum sum so far.
2) Initialize currSum with 0 and maxSum with INT_MIN.
3) Now, iterate over the array and add the value of the current element
to currSum and check
    i) If currSum is greater than maxSum, update maxSum equals to currSum.
    ii) If currSum is less than zero, make currSum equal to zero.
4) Finally, print the value of maxSum. 

This problem can be solved using several different algorithmic techniques, 
including brute force, divide and conquer, dynamic programming, and 
reduction to shortest paths.

Kadane's algorithm is applied in two ways : 
1) Empty subarrays admitted (i.e. the answer is atleast '0' if all 1-subarrays are ≤ 0)
2) Non-Empty subarrays admitted (i.e. the answer is the value closest to 0 if all 1-subarrays
are negative)


History : 
The maximum subarray problem was proposed by Ulf Grenander in 1977.
Grenander was looking to find a rectangular subarray with maximum sum,
in a two-dimensional array of real numbers. A brute-force algorithm for
the two-dimensional problem runs in O(n6) time; because this was 
prohibitively slow, Grenander proposed the one-dimensional problem to gain
insight into its structure. 

Grenander derived an algorithm that solves the one-dimensional problem in 
O(n2) time, improving the brute force running time of O(n3). When Michael Shamos
heard about the problem, he overnight devised an O(n log n) divide-and-conquer
algorithm for it. 

Soon after, Shamos described the one-dimensional problem and its history at a 
Carnegie Mellon University seminar attended by Jay Kadane, who designed within 
a minute an O(n)-time algorithm, which is as fast as possible.

In 1982, David Gries obtained the same O(n)-time algorithm by applying Dijkstra's
"standard strategy"; in 1989, Richard Bird derived it by purely algebraic 
manipulation of the brute-force algorithm using the Bird–Meertens formalism.

Grenander's two-dimensional generalization can be solved in O(n3) time either
by using Kadane's algorithm as a subroutine, or through a divide-and-conquer approach.

Slightly faster algorithms based on distance matrix multiplication have been 
proposed by Tamaki & Tokuyama (1998) and by Takaoka (2002). There is some evidence 
that no significantly faster algorithm exists; an algorithm that solves the two-
dimensional maximum subarray problem in O(n3−ε) time, for any ε>0, would imply 
a similarly fast algorithm for the all-pairs shortest paths problem. */


//	Solution function
void solve()
{
    int n;  cin >> n;
    vector<int> v(n);   for(auto& itr : v)  cin >> itr;

    int ans = INT_MIN, curr = 0;
    for(const int itr : v)
    {
        curr = max(itr, curr+itr);
        ans = max(curr, ans);
    }

    cout << ans << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}