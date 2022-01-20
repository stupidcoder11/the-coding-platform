#include <iostream>

using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,t;
    cin >> n >> t;
    
    string s;
    cin >> s;

    for(int j=0;j<t;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    
    cout << s << "\n";

    return 0;
}