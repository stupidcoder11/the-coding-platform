#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int n,tmp,item;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> item;
    int lb=0,ub=n-1,mid;

    bool flag=false,isAscending=true;
    for(int i=0;i<n-1;i++)
    if(v[i]>v[i+1])
    {
        isAscending=false;
        break;
    }

    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(item==v[mid])
        {
            flag=true;
            cout << "INDEX : " << mid << endl;
            break;
        }
        if(isAscending==true)
        {
            if(item<v[mid])
                ub=mid-1;
            else
                lb=mid+1;
        }
        if(isAscending==false)
        {
            if(item<v[mid])
                lb=mid+1;
            else
                ub=mid-1;
        }
        
    }
    if(flag==false)
        cout << "ELEMENT DOES NOT EXIST\n";    

    return 0;
}