#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    #endif
    
    int n,lb,ub,mid,pos,ele;
    bool flag=false;
    cin >> n;
    lb=0;
    ub=n-1;
    int x[n];

    for(int i=0;i<n;i++)    
        cin >> x[i];

    cin >> ele;

    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(x[mid]==ele)
        {
            flag=true;
            lb=mid+1;
            pos=lb;
        }
        else if(x[mid]>ele)
            ub=mid-1;
        else
            lb=mid+1;

    }
    if(flag)
        cout << pos << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}