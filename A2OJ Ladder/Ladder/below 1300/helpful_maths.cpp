/*  Author	: Devesh
    Motto	: Regular code makes the road!
    Link	: 	*/

#include <bits/stdc++.h>
using namespace std;

#define long long int

//-----------------------------------------------------------------------

//  Helper function
void tokenize(string s, string del=" ", vector<string>& arr)
{
    int start = 0;
    int end = s.find(del);

    while(end!=-1)
    {
        arr.push_back(s.substr(start, end-start));
        start = end+del.size();
        end = s.find(del, start);
    }
    arr.push_back(s.substr(start, end-start));
}

//	Solution function
void solve()
{
    string str; cin  >> str;
    vector<string> v;
    
    tokenize(str, "+", v);

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
        if(i<v.size()-1)
        cout << "+";
    }
    cout << "\n";
}

//-----------------------------------------------------------------------

//	Driver function
int32_t main()
{
    ios_base::sync_with_stdio(false);	cin.tie(0);

    solve();

    return 0;
}