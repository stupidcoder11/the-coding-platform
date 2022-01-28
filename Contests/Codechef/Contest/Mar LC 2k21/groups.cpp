#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    int t,cnt,i;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cnt=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                while(i<s.length()-1 && s[i+1]=='1')    ++i;

                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
}