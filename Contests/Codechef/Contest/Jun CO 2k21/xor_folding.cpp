/*	CODE WRITER	:	jinx_11

	MOTO		:	REGULAR CODE MAKES THE ROAD	*/

/*

Problem link:

https://www.codechef.com/COOK130C/problems/XORFOLD

*/

#include <iostream>
using namespace std;

void solution();

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
    
    solution();

    return 0;
}

void solution()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, m;   cin >> n >> m;
        
        int ans=0;
        string str="";
        for(int i=0;i<n;i++)
        {
            string s;   cin >> s;
            str+=s;
        }
        for(long long i=0;i<str.length();i++) ans^=(int)(str[i]-'0');

        cout << ((ans==1)?"YES":"NO") << "\n";
    }
}