#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a;
    int n,tmp,res,item,lb,ub,mid;
    bool flag=false;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> item;

    lb=0,ub=n-1;
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(item==a[mid])
        {
            flag=true;
            res=mid;
            ub=mid-1;
        }
        else if(item>a[mid])
            lb=mid+1;
        else
            ub=mid-1;
    }

    if(flag)
    {
        cout << "First occurrence of " << item << " @ index = " << res << endl;
    }
    else
        cout << "Element does not exit" << endl;

    return 0;
}