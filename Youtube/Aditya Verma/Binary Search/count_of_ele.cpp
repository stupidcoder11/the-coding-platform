#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    int n,x,lb,ub,mid,ele,st=0,ed=0;
    bool flag1=false,flag2=false;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> ele;

    lb=0,ub=n-1;
    
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(v[mid]==ele)
        {
            flag1=true;
            lb=mid+1;
            st=mid;
        }
        else if(v[mid]<ele)
            lb=mid+1;
        else 
            ub=mid-1;
    }
    lb=0,ub=n-1;
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(v[mid]==ele)
        {
            flag2=true;
            ub=mid-1;
            ed=mid;
        }
        else if(v[mid]<ele)
            lb=mid+1;
        else 
            ub=mid-1;
    }

    if(flag1 && flag2)
    cout << "Count = " << st-ed+1 << endl;
    else
    cout << "Element does not exist" << endl;

    v.clear();

    return 0;
}